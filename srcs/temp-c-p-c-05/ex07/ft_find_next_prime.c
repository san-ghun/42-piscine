/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:55:08 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 15:49:57 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	t;

	if (nb < 2)
		return (0);
	t = 2;
	while (t <= nb / 2)
	{
		if (nb % t == 0)
			return (0);
		t++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	t;
	int	d;

	t = 0;
	if (nb < 0)
		return (2);
	while (t < 2147483647)
	{
		d = ft_is_prime(nb);
		if (d)
			break ;
		else
			nb += 1;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	t;

	t = ft_find_next_prime(2147483648);
	printf("%d\n", t);
}*/
