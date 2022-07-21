/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <sanghupa@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:36:34 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/06 23:36:42 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	result = s1[i] - s2[i];
	if (result > 0)
		result = 1;
	else if (result < 0)
		result = -1;
	else
		result = 0;
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	l;
	unsigned int	r;

	r = strcmp("abc", "abc");
	l = ft_strcmp("abc", "abc");
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strcmp("abcdefg", "abcdefgh");
	l = ft_strcmp("abcdefg", "abcdefgh");
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strcmp("abcde", "abcd");
	l = ft_strcmp("abcde", "abcd");
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strcmp("a", "");
	l = ft_strcmp("a", "");
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strcmp("", "123456");
	l = ft_strcmp("", "123456");
	printf("real: %d / ft: %d\n/\n", r, l);

	r = strcmp("123456", "123456");
	l = ft_strcmp("123456", "123456");
	printf("real: %d / ft: %d\n/\n", r, l);
	return (0);
}*/