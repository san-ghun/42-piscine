/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <sanghupa@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:17:49 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/11 16:41:28 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphnum(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) // need to treated this way!
		return (1);
	else if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

char	ft_charupcase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

char	ft_charlowcase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) || !(ft_char_is_alphnum(str[i - 1])))
			str[i] = ft_charupcase(str[i]);
		else
			str[i] = ft_charlowcase(str[i]);
		i++;
	}
	return (str);
}
