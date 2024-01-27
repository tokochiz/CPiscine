/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:05:15 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/22 20:00:38 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
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
// 	output = ft_recursive_factorial(nb1);
// 	printf("%d\n", output);
// 	output = ft_recursive_factorial(nb2);
// 	printf("%d\n", output);
// 	output = ft_recursive_factorial(nb3);
// 	printf("%d\n", output);
// 	output = ft_recursive_factorial(nb4);
// 	printf("%d\n", output);

// 	return (0);
// }