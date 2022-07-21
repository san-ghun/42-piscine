/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:49:27 by sanghupa          #+#    #+#             */
/*   Updated: 2022/06/29 20:49:42 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(int arr[], int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		ft_putchar(arr[i] + 48);
		i++;
	}
}

void	ft_combination(int arr[], int index, int n, int target)
{
	int	temp;

	temp = index;
	if (n == 0)
	{
		ft_putcomb(arr, index);
		if (!((arr[0] == 10 - temp) && (arr[temp - 1] == 9)))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	else if (target == 10)
	{
		return ;
	}
	else
	{
		arr[index] = target;
		ft_combination(arr, index + 1, n - 1, target + 1);
		ft_combination(arr, index, n, target + 1);
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	ft_combination(arr, 0, n, 0);
}
