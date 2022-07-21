/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <sanghupa@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:40:55 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 11:06:49 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len + 1);
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	t;
	int	*range[10];

	t = ft_ultimate_range(range, 3, 10);
	printf("%d\n", t);
	while (t + 1)
	{
		printf("%d\n", range[0][t]);
		t--;
	}
}*/
