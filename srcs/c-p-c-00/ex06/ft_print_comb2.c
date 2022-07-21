/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:48:57 by sanghupa          #+#    #+#             */
/*   Updated: 2022/06/30 14:48:35 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char a, char b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
}

void	ft_print_comb2(void)
{
	char	arr[2];

	arr[0] = 0;
	while (arr[0] <= 98)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 99)
		{
			ft_putline(arr[0], arr[1]);
			if (arr[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
