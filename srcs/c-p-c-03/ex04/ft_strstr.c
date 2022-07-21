/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:04:01 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 14:35:18 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			check = i;
			while (to_find[j] == str[i])
			{
				if (to_find[j + 1] == '\0')
					return (&str[check]);
				i++;
				j++;
			}
			i = check;
		}
		i++;
	}
	return ('\0');
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
	r = strstr(str2, "a");
	l = ft_strstr(str1, "a");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abcdefg");
	strcpy(str2, "abcdefg");
	r = strstr(str2, "fg");
	l = ft_strstr(str1, "fg");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abcde");
	strcpy(str2, "abcde");
	r = strstr(str2, "def");
	l = ft_strstr(str1, "def");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "a");
	strcpy(str2, "a");
	r = strstr(str2, "");
	l = ft_strstr(str1, "");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "");
	strcpy(str2, "");
	r = strstr(str2, "123456");
	l = ft_strstr(str1, "123456");
	printf("real: %s / ft: %s\n/\n", r, l);

	strcpy(str1, "abc");
	strcpy(str2, "abc");
	r = strstr(str2, "123456");
	l = ft_strstr(str1, "123456");
	printf("real: %s / ft: %s\n/\n", r, l);
	return (0);
}*/