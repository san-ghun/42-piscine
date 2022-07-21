/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:36:00 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/03 18:36:04 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validate_argv(char *arg, int params[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i] != '\0')
	{
		if ((i % 2 == 1) && (arg[i] == ' '))
		{
			i++;
			continue ;
		}
		if ((i % 2 == 1) && (arg[i] != ' '))
			return (2);
		if ((i % 2 == 0) && !((arg[i] > '0') && (arg[i] < '5')))
			return (3);
		params[j] = arg[i] - '0';
		j++;
		i++;
	}
	if (i != 31)
		return (1);
	params[16] = '\0';
	return (0);
}
