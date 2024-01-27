/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:16:59 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/25 21:07:14 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	left;
	long	right;
	long	middle;
	long	nb_long;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	left = 0;
	nb_long = (long)nb;
	right = nb_long;
	while (left <= right)
	{
		middle = left + (right - left) / 2;
		if (middle * middle == nb_long)
			return (middle);
		else if (middle * middle > nb_long)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (left - 1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	nb_sqrt;

	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	i = 2;
	nb_sqrt = ft_sqrt(nb);
	while (i <= nb_sqrt)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// // 1:prime 0:not prime
// int	main(void)
// {
// 	int nb;
// 	int output;

// 	nb = __INT_MAX__; // 2147483647
// 	output = ft_is_prime(nb);
// 	printf("%d\n", output);

// 	nb = 0;
// 	output = ft_is_prime(nb);
// 	printf("%d\n", output);

// 	nb = 1;
// 	output = ft_is_prime(nb);
// 	printf("%d\n", output);

// 	nb = 25;
// 	output = ft_is_prime(nb);
// 	printf("%d\n", output);

// 	nb = 41;
// 	output = ft_is_prime(nb);
// 	printf("%d\n", output);

// 	return (0);
// }