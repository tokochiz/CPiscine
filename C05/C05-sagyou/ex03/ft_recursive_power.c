/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:13:11 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/20 11:41:58 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb;
// 	int power;
// 	int output;

// 	nb = 2;
// 	power = 2;
// 	output = 0; // initialize
// 	output = ft_recursive_power(nb, power);
// 	printf("%d\n", output);
// 	return (0);
// }