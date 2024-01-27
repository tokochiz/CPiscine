/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:03:03 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/21 20:06:54 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	input;

	input = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		input = input * nb;
		power--;
	}
	return (input);
}

// #include <stdio.h>

// int	main(void)
// {
// 	// int nb;
// 	// int power;
// 	int output;

// 	output = 0; // initialize
// 	output = ft_iterative_power(0, 0);
// 	printf("%d\n", output);

// 	output = ft_iterative_power(0, 5);
// 	printf("%d\n", output);

// 	output = ft_iterative_power(2, 10);
// 	printf("%d\n", output);

// 	output = ft_iterative_power(2, -1);
// 	printf("%d\n", output);
// 	return (0);
// }