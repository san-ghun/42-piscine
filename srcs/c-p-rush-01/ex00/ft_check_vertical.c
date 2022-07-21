/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_vertical.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:18:18 by riael             #+#    #+#             */
/*   Updated: 2022/07/03 22:15:47 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_top_bot(int rule_top, int curr, int **mat);
int	ft_bot_top(int rule_bot, int curr, int **mat);

int	ft_check_vertical(int rule_top, int rule_bot, int curr, int **mat)
{
	int	check;

	check = 1;
	check = ft_top_bot(rule_top, curr, mat);
	if (check == 1)
		check = ft_bot_top(rule_bot, curr, mat);
	return (check);
}

int	ft_top_bot(int rule_top, int curr, int **mat)
{
	int	i;
	int	counter;
	int	currmax;

	i = 0;
	counter = 0;
	currmax = 0;
	while (i < 4)
	{
		if (mat[i][curr] > currmax)
		{
			currmax = mat[i][curr];
			counter += 1;
		}
		i += 1;
	}
	if (rule_top != counter)
		return (0);
	return (1);
}

int	ft_bot_top(int rule_bot, int curr, int **mat)
{
	int	i;
	int	counter;
	int	currmax;

	i = 3;
	counter = 0;
	currmax = 0;
	while (i >= 0)
	{
		if (mat[i][curr] > currmax)
		{
			currmax = mat[i][curr];
			counter += 1;
		}
		i -= 1;
	}
	if (rule_bot != counter)
		return (0);
	return (1);
}
