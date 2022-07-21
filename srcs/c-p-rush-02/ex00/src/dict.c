/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: sanghupa <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/10 16:31:24 by sanghupa	       #+#    #+#	      */
/*   Updated: 2022/07/10 16:59:09 by sanghupa         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*g_dict;

int	is_valid_key_val(char *str)
{
	int	ck_colon;
	int	ck_key;
	int	ck_val;

	ck_colon = 0;
	ck_key = 0;
	ck_val = 0;
	while (*str)
	{
		if (*str == ':')
			ck_colon++;
		else if (is_space(*str) == -1)
		{
			if (ck_colon > 0)
				ck_val++;
			else
				ck_key++;
		}
		str++;
	}
	if (ck_colon == 1 && ck_key > 0 && ck_val > 0)
		return (1);
	return (-1);
}

void	insert_key_val(char *str)
{
	char	*key;
	char	*val;
	char	*ptr;

	key = str;
	ptr = str;
	while (*ptr != ':')
		ptr++;
	key = (char *)malloc(ptr - key + 1);
	ft_copy(key, str, ptr - 1);
	key = trim_str(key);
	val = ptr + 1;
	str = val;
	while (*ptr)
		ptr++;
	val = (char *)malloc(ptr - val + 1);
	ft_copy(val, str, ptr - 1);
	val = trim_str(val);
	push(key, val);
}

char	*read_line(int fopen)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(1024 + 1);
	while ((read(fopen, &ret[i], 1)))
	{
		if (i == 1024)
		{
			free(ret);
			return (0);
		}
		if (ret[i] == '\n' && i != 0)
		{
			ret[i] = 0;
			break ;
		}
		i++;
	}
	return (ret);
}

int	build_dict(char *file)
{
	int		is_error;
	int		f;
	char	*line;

	is_error = 0;
	f = open(file, O_RDONLY);
	if (f < 0)
		return (-1);
	line = read_line(f);
	while (line)
	{
		if (!*line)
			break ;
		if (is_valid_key_val(line) == -1)
		{
			is_error = 1;
			break ;
		}
		insert_key_val(line);
		line = read_line(f);
	}
	close(f);
	if (is_error)
		return (-1);
	return (1);
}
