/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurscrapers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:05:20 by riael             #+#    #+#             */
/*   Updated: 2022/07/03 22:11:04 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_solution(int **mat, int *rules);
int	ft_blank_skyscraper(int *row, int *col, int **mat);
int	ft_identical(int n, int r, int c, int **mat);
int	ft_check_solution(int **mat, int *rules);
int	ft_print_matrix(int **mat);

int	ft_recurscrapers(int **mat, int *rules)
{
	int	row;
	int	col;
	int	i;

	if (ft_blank_skyscraper(&row, &col, mat) == 0)
		return (1);
	i = 1;
	while (i <= 4)
	{
		if (ft_identical(i, row, col, mat))
		{
			mat[row][col] = i;
			if (ft_recurscrapers(mat, rules))
				if (ft_check_solution(mat, rules))
					return (1);
			ft_print_matrix(mat);
			write(1, "\n", 1);
			mat[row][col] = 0;
		}
		i += 1;
	}
	return (0);
}
