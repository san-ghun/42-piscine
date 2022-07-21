/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:01:03 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 20:58:32 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	t;

	if (nb == 1)
		return (1);
	i = 0;
	t = nb / 2;
	while (t - i > 0)
	{
		t -= i;
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	t;

	t = ft_sqrt(4);
	printf("%d\n", t);
}*/
