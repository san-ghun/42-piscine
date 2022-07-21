/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:57:41 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/10 16:57:44 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*create_dict(char *key, char *val)
{
	t_dict	*ret;

	ret = (t_dict *)malloc(sizeof(t_dict));
	ret->key = key;
	ret->val = val;
	ret->next = 0;
	return (ret);
}

void	push(char *key, char *val)
{
	t_dict	*temp;

	if (!g_dict)
		g_dict = create_dict(key, val);
	else
	{
		temp = g_dict;
		g_dict = create_dict(key, val);
		g_dict->next = temp;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}

char	*get_val(char *key)
{
	t_dict	*temp;

	temp = g_dict;
	while (temp)
	{
		if (ft_strcmp(temp->key, key) == 1)
			return (temp->val);
		temp = temp->next;
	}
	return (0);
}
