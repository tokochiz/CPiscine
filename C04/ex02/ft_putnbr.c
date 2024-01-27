/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:48:59 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/19 13:49:27 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_recursive(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_recursive(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putnbr_recursive(nb);
	}
}

// int	main(void)
// {
// 	int num1 = 2147483647;  // 最大値
// 	int num2 = -2147483648; // 最小値

// 	ft_putnbr(num1);
// 	ft_putchar('\n');

// 	ft_putnbr(num2);
// 	ft_putchar('\n');
// 	return (0);
// }