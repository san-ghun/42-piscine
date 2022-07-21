/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:12:34 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 19:32:34 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (((c >= 7) && (c <= 13)) || (c == ' '))
		return (1);
	return (0);
}

int	ft_is_digit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	while ((str[i] == '-') || (str[i] == '+') || (str[i] == '0'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] != '\0') && (ft_is_digit(str[i])))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
}
*/