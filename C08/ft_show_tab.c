/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 08:35:40 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/28 20:51:54 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void				ft_show_tab(struct s_stock_str *par);

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr <= 0)
	{
		write(1, "0", 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;
	t_stock_str	*stock_str;

	stock_str = par;
	i = 0;
	while (stock_str[i].str != NULL)
	{
		ft_putstr(stock_str[i].str);
		write(1, "\n", 1);
		ft_putnbr(stock_str[i].size);
		write(1, "\n", 1);
		ft_putstr(stock_str[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// struct t_stock_str	*ft_strs_to_tab(int ac, char **av);

// int	main(int ac, char *av[])
// {
// 	ft_show_tab(ft_strs_to_tab(ac - 1, av + 1));
// 	return (0);
// }
