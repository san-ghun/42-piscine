/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:18:18 by sanghupa          #+#    #+#             */
/*   Updated: 2022/06/30 14:54:52 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	st_i;
	int	en_i;
	int	hsize;

	st_i = 0;
	en_i = size - 1;
	hsize = size / 2;
	while (hsize > 0)
	{
		ft_swap(&tab[st_i], &tab[en_i]);
		st_i++;
		en_i--;
		hsize--;
	}
}
