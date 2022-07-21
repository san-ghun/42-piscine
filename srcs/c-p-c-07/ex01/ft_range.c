/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:12:41 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 11:00:26 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len + 1);
	if (arr == NULL)
		return (NULL);
	while (i < len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	*temp;

	temp = ft_range(7, 10);
	while (*temp)
	{
		printf("%d\n", *temp);
		temp++;
	}
}*/
