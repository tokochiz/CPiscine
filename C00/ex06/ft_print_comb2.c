/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:10:25 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/13 17:12:08 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_digits(int num1, int num2)
{
	int	tens_digit1;
	int	ones_digit1;
	int	tens_digit2;
	int	ones_digit2;

	tens_digit1 = num1 / 10;
	ones_digit1 = num1 % 10;
	ft_putchar('0' + tens_digit1);
	ft_putchar('0' + ones_digit1);
	ft_putchar(' ');
	tens_digit2 = num2 / 10;
	ones_digit2 = num2 % 10;
	ft_putchar('0' + tens_digit2);
	ft_putchar('0' + ones_digit2);
}

void	ft_print_num(int i, int j)
{
	if (i < j)
	{
		ft_digits(i, j);
		if (i != 98 || j != 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			ft_print_num(i, j);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
