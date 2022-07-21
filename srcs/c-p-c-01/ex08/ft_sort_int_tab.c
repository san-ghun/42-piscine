/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:17:17 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/02 15:52:10 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// Used 'Selection Sort' algorithm as reference.
void	ft_sort_int_tab(int *tab, int size)
{
	int	left_index;
	int	travel_index;
	int	select_index;
	int	max_index;

	left_index = 0;
	max_index = size - 1;
	while (left_index < max_index)
	{
		travel_index = left_index + 1;
		select_index = travel_index;
		while (travel_index++ != max_index)
		{
			if (tab[travel_index] < tab[select_index])
				select_index = travel_index;
		}
		if (tab[left_index] > tab[select_index])
			ft_swap(&tab[left_index], &tab[select_index]);
		left_index++;
	}
}
