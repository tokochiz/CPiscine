/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:32:07 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/22 19:59:05 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	input;

	input = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		input = input * nb;
		nb--;
	}
	return (input);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb1, nb2, nb3, nb4;
// 	int output = 0;

// 	nb1 = 5;
// 	nb2 = 1;
// 	nb3 = 0;
// 	nb4 = -10;

// 	// output1 = 0;
// 	output = ft_iterative_factorial(nb1);
// 	printf("%d\n", output);
// 	output = ft_iterative_factorial(nb2);
// 	printf("%d\n", output);
// 	output = ft_iterative_factorial(nb3);
// 	printf("%d\n", output);
// 	output = ft_iterative_factorial(nb4);
// 	printf("%d\n", output);
// 	return (0);
// }