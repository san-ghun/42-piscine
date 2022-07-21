/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghupa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:23:34 by sanghupa          #+#    #+#             */
/*   Updated: 2022/07/07 17:11:33 by sanghupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if ((nb >= 0) && (nb <= 9))
	{
		nb += 48;
		ft_putchar(nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-12838);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(839738);
}
*/