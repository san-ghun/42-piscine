/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:39:09 by sanghupa          #+#    #+#             */
/*   Updated: 2022/06/25 15:05:31 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int x, char a, char b, char c)
{
	ft_putchar(a);
	while (x >= 2)
	{
		if (x > 2)
		{
			ft_putchar(b);
		}
		else if (x == 2)
		{
			ft_putchar(c);
		}
		x--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	a;
	char	b;
	char	c;

	a = 'A';
	b = 'B';
	c = 'C';
	ft_putline(x, a, b, c);
	while (y >= 2)
	{
		if (y > 2)
		{
			a = 'B';
			b = ' ';
			c = 'B';
		}
		else if (y == 2)
		{
			a = 'C';
			b = 'B';
			c = 'A';
		}
		ft_putline(x, a, b, c);
		y--;
	}
}
