/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:47:43 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/10 16:51:34 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_space(char c)
{
	int	ret;

	ret = -1;
	if (c == ' ' || (9 <= c && c <= 13))
		ret = 1;
	return (ret);
}

int	is_letter(char c)
{
	int	ret;

	if ('0' <= c && c <= '9')
		ret = 1;
	else if ('a' <= c && c <= 'z')
		ret = 1;
	else if ('A' <= c && c <= 'Z')
		ret = 1;
	else
		ret = -1;
	return (ret);
}

void	ft_copy(char *dest, char *begin, char *end)
{
	while (begin <= end)
	{
		*dest = *begin;
		dest++;
		begin++;
	}
	*dest = 0;
}

char	*trim_side(char *str)
{
	char	*ret;
	char	*begin;
	char	*end;

	if (!*str)
		return (0);
	begin = str;
	while (*begin && (is_space(*begin) == 1))
		begin++;
	end = begin;
	while (*end)
		end++;
	end--;
	while (is_space(*end) == 1)
		end--;
	ret = (char *)malloc(end - begin + 2);
	ft_copy(ret, begin, end);
	return (ret);
}

char	*trim_str(char *str)
{
	char	*ret;

	ret = trim_side(str);
	free(str);
	return (ret);
}
