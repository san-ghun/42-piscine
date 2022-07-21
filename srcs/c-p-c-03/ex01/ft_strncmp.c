/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <sanghupa@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:49:15 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/12 14:56:10 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	l;
	int	r;

	r = strncmp("abc", "abc", 10);
	l = ft_strncmp("abc", "abc", 10);
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strncmp("abcdefg", "abcdefgh", 8);
	l = ft_strncmp("abcdefg", "abcdefgh", 8);
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strncmp("abcde", "abcd", 5);
	l = ft_strncmp("abcde", "abcd", 5);
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strncmp("a", "", 0);
	l = ft_strncmp("a", "", 0);
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strncmp("", "123456", 1);
	l = ft_strncmp("", "123456", 1);
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strncmp("123456", "123456", 10);
	l = ft_strncmp("123456", "123456", 10);
	printf("real: %d / ft: %d\n/\n", r, l);
	return (0);
}*/
