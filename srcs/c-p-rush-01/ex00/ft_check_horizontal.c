/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_horizontal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:13:25 by riael             #+#    #+#             */
/*   Updated: 2022/07/03 22:09:54 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_left_right(int rule_left, int curr, int **mat);
int	ft_right_left(int rule_right, int curr, int **mat);

int	ft_check_horizontal(int rule_left, int rule_right, int curr, int **mat)
{
	int	check;

	check = 1;
	check = ft_left_right(rule_left, curr, mat);
	if (check == 1)
		check = ft_right_left(rule_right, curr, mat);
	return (check);
}

int	ft_left_right(int rule_left, int curr, int **mat)
{
	int	i;
	int	counter;
	int	currmax;

	i = 0;
	counter = 0;
	currmax = 0;
	while (i < 4)
	{
		if (mat[curr][i] > currmax)
		{
			currmax = mat[curr][i];
			counter += 1;
		}
		i += 1;
	}
	if (rule_left != counter)
		return (0);
	return (1);
}

int	ft_right_left(int rule_right, int curr, int **mat)
{
	int	i;
	int	counter;
	int	currmax;

	i = 3;
	counter = 0;
	currmax = 0;
	while (i >= 0)
	{
		if (mat[curr][i] > currmax)
		{
			currmax = mat[curr][i];
			counter += 1;
		}
		i -= 1;
	}
	if (rule_right != counter)
		return (0);
	return (1);
}
