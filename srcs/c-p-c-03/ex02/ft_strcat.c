/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:26:12 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 10:49:19 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*l;
	char	*r;
	char	str1[20];
	char	str2[20];

	strcpy(str1, "abc");
	strcpy(str2, "abc");
	r = strcat(str1, "abc");
	l = ft_strcat(str2, "abc");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abcdefg");
	strcpy(str2, "abcdefg");
	r = strcat(str1, "abcdefgh");
	l = ft_strcat(str2, "abcdefgh");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abcde");
	strcpy(str2, "abcde");
	r = strcat(str1, "abcd");
	l = ft_strcat(str2, "abcd");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "a");
	strcpy(str2, "a");
	r = strcat(str1, "");
	l = ft_strcat(str2, "");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "");
	strcpy(str2, "");
	r = strcat(str1, "123456");
	l = ft_strcat(str2, "123456");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abc");
	strcpy(str2, "abc");
	r = strcat(str1, "123456");
	l = ft_strcat(str2, "123456");
	printf("real: %s / ft: %s\n/\n", r, l);
	return (0);
}*/