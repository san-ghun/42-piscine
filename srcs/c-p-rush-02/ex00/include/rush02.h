/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:26:29 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/10 17:44:16 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_dict
{
	char			*key;
	char			*val;
	struct s_dict	*next;
}				t_dict;

extern t_dict	*g_dict;
extern int		g_first;

void	ft_print(char *str);
int		ft_strlen(char *str);
int		validate_input(char *str);

int		is_valid_key_val(char *str);
void	insert_key_val(char *str);
char	*read_line(int fopen);
int		build_dict(char *file);

t_dict	*create_dict(char *key, char *val);
void	push(char *key, char *val);
int		ft_strcmp(char *s1, char *s2);
char	*get_val(char *key);

int		parse_nbr(char *str);

int		is_space(char c);
int		is_letter(char c);
void	ft_copy(char *dest, char *begin, char *end);
char	*trim_side(char *str);
char	*trim_str(char *str);

#endif
