/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:11:53 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/12 14:15:22 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_av_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}

int	main(int ac, char **av)
{
	int	n;

	n = ac - 1;
	while (n > 0)
	{
		print_av_name(av[n]);
		n--;
	}
	return (ac);
}
