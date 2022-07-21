/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:45:01 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 15:49:05 by sanghupa         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	int	t;

	t = ft_is_prime(4);
	printf("%d\n", t);
}*/
