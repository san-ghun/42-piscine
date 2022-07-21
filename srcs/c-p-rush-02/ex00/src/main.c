/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:30:46 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/10 16:31:16 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		g_first;

int	main(int ac, char **av)
{
	char	*dict;
	int		idx;
	int		ret;

	idx = 1;
	ret = 0;
	dict = NULL;
	g_first = 1;
	if (ac == 3)
	{
		idx = 2;
		dict = av[1];
	}
	else if (ac == 2)
		dict = "numbers.dict";
	ret = (ac == 1 || ac > 3 || validate_input(av[idx]) == -1);
	if (!ret)
		ret = (build_dict(dict) == -1 || parse_nbr(av[idx]) == -1) * 2;
	if (ret == 1)
		ft_print("Error\n");
	if (ret == 2)
		ft_print("Dict Error\n");
	return (ret);
}
