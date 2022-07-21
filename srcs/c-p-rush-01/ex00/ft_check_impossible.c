/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_impossible.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:36:33 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/03 18:42:55 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	imp_sum_check(int params[], int i, int j)
{
	if ((params[i] + params[j] > 5) || (params[i] + params[j] < 3))
		return (1);
	else
		return (0);
}

void	fill_zero_one_check(int one_check[])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		one_check[i] = 0;
		i++;
	}
}

void	prep_one_check(int params[], int i, int j, int one_check[])
{
	if (i < 4)
	{
		if (params[i] == 1)
			one_check[0] += 1;
		if (params[j] == 1)
			one_check[1] += 1;
	}
	else if (i < 12)
	{
		if (params[i] == 1)
			one_check[2] += 1;
		if (params[j] == 1)
			one_check[3] += 1;
	}
}

int	imp_one_check(int one_check[])
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 4)
	{
		sum += one_check[i];
		i++;
	}
	if (sum != 4)
		return (1);
	return (0);
}

int	ft_check_impossible(int params[])
{
	int	i;
	int	j;
	int	one_check[4];

	i = -1;
	j = 0;
	fill_zero_one_check(one_check);
	while (++i < 4)
	{
		j = i + 4;
		prep_one_check(params, i, j, one_check);
		if (imp_sum_check(params, i, j) > 0)
			return (1);
	}
	i = 7;
	while (++i < 12)
	{
		j = i + 4;
		prep_one_check(params, i, j, one_check);
		if (imp_sum_check(params, i, j) > 0)
			return (2);
	}
	if (imp_one_check(one_check) > 0)
		return (3);
	return (0);
}
