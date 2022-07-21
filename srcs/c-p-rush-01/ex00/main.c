/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:06:38 by riael             #+#    #+#             */
/*   Updated: 2022/07/03 22:12:53 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_validate_argv(char *arg, int params[]);
int	ft_check_impossible(int params[]);
int	**ft_make_matrix(void);
int	ft_recurscrapers(int **mat, int *rules);
int	ft_print_matrix(int **mat);

// To print out error message
int	error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	main(int argc, char **argv)
{
	int	f;
	int	rules[16];
	int	**mat;

	if ((argc != 2) || (ft_validate_argv(argv[1], rules) != 0))
		return (error());
	if (ft_check_impossible(rules) != 0)
		return (error());
	mat = ft_make_matrix();
	f = ft_recurscrapers(mat, rules);
	if (f == 0)
		return (error());
	ft_print_matrix(mat);
	return (0);
}
