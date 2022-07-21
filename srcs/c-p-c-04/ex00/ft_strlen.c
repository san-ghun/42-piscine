/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:10:51 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 16:16:36 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[20];
	int	len;

	strcpy(str1, "abcde");
	len = ft_strlen(str1);
	printf("text: %s / strlen: %d\n", str1, len);
}
*/
