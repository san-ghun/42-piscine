/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:42:17 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/10 16:47:32 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_gprint(char *str)
{
	if (!g_first)
		ft_print(" ");
	g_first = 0;
	ft_print(str);
}

/* count = number of digits (length of the number) 
given by process_unit func() 
malloc count + 2 because it's the number 
of 0s with a 1 in front and a terminator*/
char	*build_unit_str(int count)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(count + 2);
	ret[count + 1] = '\0';
	ret[0] = '1';
	i = count;
	while (i > 0)
		ret[i--] = '0';
	return (ret);
}

/* idx = digits number */
void	process_unit(int idx, int units[])
{
	char	*unit_str;

	if ((units[2] == 1) && (idx % 3 == 0))
	{
		unit_str = build_unit_str(idx);
		ft_gprint(get_val(unit_str));
		free(unit_str);
		units[2] = 0;
	}
	else if ((units[2] == 1) && (idx % 3 == 2))
		ft_gprint(get_val("100"));
}

int	process_nbr(int idx, char *nbr, int units[], char *temp)
{
	int	ret;

	ret = 0;
	if (*nbr != '0')
	{
		units[2] = 1;
		units[1] = 1;
		temp[0] = *nbr;
		if (idx % 3 == 2)
		{
			if (*nbr == '1' && *(nbr + 1) != '0')
			{
				temp[1] = *(nbr + 1);
				ret++;
			}
			else
				temp[1] = '0';
		}
		else
			temp[1] = '\0';
		ft_gprint(get_val(temp));
	}
	else
		units[1] = 0;
	return (ret);
}

int	parse_nbr(char *nbr)
{
	int		nbr_len;
	int		set;
	int		units[3];
	char	*temp;

	if (nbr[0] == '0')
		ft_gprint(get_val("0"));
	else
	{
		temp = (char *)malloc(3);
		temp[2] = '\0';
		units[2] = 0;
		units[1] = 0;
		nbr_len = ft_strlen(nbr);
		while (nbr_len)
		{
			process_unit(nbr_len, units);
			set = process_nbr(nbr_len, nbr, units, temp);
			nbr += (1 + set);
			nbr_len -= (1 + set);
		}
		free(temp);
	}
	ft_print("\n");
	return (1);
}
