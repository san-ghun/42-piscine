/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:16:17 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 18:01:21 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ret;

	ret = 0;
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	ret = *s1 - *s2;
	if (ret > 0)
		ret = 1;
	else if (ret < 0)
		ret = -1;
	else
		ret = 0;
	return (ret);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_str_tab(char **av, int size)
{
	int		idx_left;
	int		idx_travel;
	int		idx_select;
	char	*temp;

	idx_left = 1;
	while (idx_left < size - 1)
	{
		idx_travel = idx_left + 1;
		idx_select = idx_travel;
		while (idx_travel++ != size - 1)
		{
			if (ft_strcmp(av[idx_travel], av[idx_select]) == -1)
				idx_select = idx_travel;
		}
		if (ft_strcmp(av[idx_left], av[idx_select]) == 1)
		{
			temp = av[idx_left];
			av[idx_left] = av[idx_select];
			av[idx_select] = temp;
		}
		idx_left++;
	}
}

int	print_av_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}

int	main(int ac, char **av)
{
	int	n;

	n = 1;
	ft_sort_str_tab(av, ac);
	while (n != ac)
	{
		print_av_name(av[n]);
		n++;
	}
	return (ac);
}
