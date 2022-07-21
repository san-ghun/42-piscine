/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:57:03 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/13 14:51:28 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ret;

	i = 0;
	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (ret == NULL)
		return (NULL);
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
		i++;
	}
	ret[i].str = 0;
	return (ret);
}
