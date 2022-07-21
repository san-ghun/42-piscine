/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blank_skyscraper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:24:34 by riael             #+#    #+#             */
/*   Updated: 2022/07/03 19:43:24 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_blank_skyscraper(int *row, int *col, int **mat)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (mat[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j += 1;
		}
		i += 1;
	}
	return (0);
}
