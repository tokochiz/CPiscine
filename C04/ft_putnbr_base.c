/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:01:12 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/19 14:32:35 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_get_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			set_base;
	long int	long_nbr;

	long_nbr = nbr;
	set_base = 0;
	set_base = ft_get_base(base);
	if (set_base < 2)
		return ;
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	if (long_nbr >= set_base)
	{
		ft_putnbr_base(long_nbr / set_base, base);
		write(1, &base[long_nbr % set_base], 1);
	}
	else
	{
		write(1, &base[long_nbr], 1);
	}
}

// int	main(void)
// {
// 	int i;
// 	i = 1;
// 	ft_putnbr_base(2147483647, "01"); // Output:(binary)
// 	write(1, "\n", 1);
// 	ft_putnbr_base(2147483647, "0123456789"); // Output: (decimal)
// 	write(1, "\n", 1);
// 	ft_putnbr_base(2147483647, "0123456789ABCDEF"); // Output: (hexadecimal)
// 	write(1, "\n", 1);
// 	ft_putnbr_base(2147483647, "poneyvif"); // Output: (octal)
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
// 		// Output: (negative decimal)
// 	write(1, "\n", 1);
// 	ft_putnbr_base(55, "1"); // No output (invalid base)
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "01234567899A"); // No output (invalid base)
// 	write(1, "\n", 1);

// 	return (0);
// }