/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:41:06 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 14:51:56 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx_d;
	unsigned int	idx_s;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	idx_d = 0;
	while (dest[idx_d] != '\0')
		idx_d++;
	idx_s = 0;
	while ((src[idx_s] != '\0') && (idx_d + 1 < size))
	{
		dest[idx_d] = src[idx_s];
		idx_d++;
		idx_s++;
	}
	dest[idx_d] = '\0';
	if (len_dest > size)
		return (len_src + size);
	else
		return (len_src + len_dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	l;
	// char	*r;
	char	str1[20];
	char	str2[20];

	strcpy(str1, "abc");
	strcpy(str2, "abc");
	l = ft_strlcat(str1, "abc", 6);
	// r = strlcat(str2, "abc", 2);
	printf("%s / %d\n/\n", str1, l);

	strcpy(str1, "abcdefg");
	strcpy(str2, "abcdefg");
	l = ft_strlcat(str1, "abcdefgh", 0);
	// r = strlcat(str2, "abcdefgh", 0);
	printf("%s / %d\n/\n", str1, l);

	strcpy(str1, "abcde");
	strcpy(str2, "abcde");
	l = ft_strlcat(str1, "abcd", 3);
	// r = strlcat(str2, "abcd", 3);
	printf("%s / %d\n/\n", str1, l);

	strcpy(str1, "a");
	strcpy(str2, "a");
	l = ft_strlcat(str1, "", 3);
	// r = strlcat(str2, "", 3);
	printf("%s / %d\n/\n", str1, l);

	strcpy(str1, "");
	strcpy(str2, "");
	l = ft_strlcat(str1, "123456", 3);
	// r = strlcat(str2, "123456", 3);
	printf("%s / %d\n/\n", str1, l);

	strcpy(str1, "abc");
	strcpy(str2, "abc");
	l = ft_strlcat(str1, "123456", 3);
	// r = strlcat(str2, "123456", 3);
	printf("%s / %d\n/\n", str1, l);
	return (0);
}*/