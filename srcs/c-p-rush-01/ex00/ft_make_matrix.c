/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:51:39 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/03 22:15:09 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_make_matrix(void)
{
	int	i;
	int	j;
	int	**mat;

	mat = (int **)malloc(sizeof(int) * 16);
	i = 0;
	while (i < 4)
	{
		mat[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mat[i][j] = 0;
			j++;
		}
		i++;
	}
	return (mat);
}
