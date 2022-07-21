/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:10:53 by riael             #+#    #+#             */
/*   Updated: 2022/07/03 22:16:08 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_horizontal(int input_left, int input_right, int curr, int **mat);
int	ft_check_vertical(int input_top, int input_bot, int curr, int **mat);

int	ft_check_solution(int **mat, int *rules)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (ft_check_vertical(rules[i], rules[i + 4], i, mat) == 0)
			return (0);
		if (ft_check_horizontal(rules[i + 8], rules[i + 12], i, mat) == 0)
			return (0);
		i += 1;
	}
	return (1);
}
