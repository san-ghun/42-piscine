/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:55:26 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 11:02:46 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb == 0)
		return (dest);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((src[j] != '\0') && (j < nb))
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
	r = strncat(str2, "abc", 2);
	l = ft_strncat(str1, "abc", 2);
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abcdefg");
	strcpy(str2, "abcdefg");
	r = strncat(str2, "abcdefgh", 0);
	l = ft_strncat(str1, "abcdefgh", 0);
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abcde");
	strcpy(str2, "abcde");
	r = strncat(str2, "abcd", 3);
	l = ft_strncat(str1, "abcd", 3);
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "a");
	strcpy(str2, "a");
	r = strncat(str2, "", 3);
	l = ft_strncat(str1, "", 3);
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "");
	strcpy(str2, "");
	r = strncat(str2, "123456", 3);
	l = ft_strncat(str1, "123456", 3);
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abc");
	strcpy(str2, "abc");
	r = strncat(str2, "123456", 3);
	l = ft_strncat(str1, "123456", 3);
	printf("real: %s / ft: %s\n/\n", r, l);
	return (0);
}*/