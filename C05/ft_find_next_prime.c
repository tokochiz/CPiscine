/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:26:06 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/25 21:07:19 by  ctokoyod        ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>

// // 1:prime 0:not prime
// int	main(void)
// {
// 	int output = 0;

// 	output = ft_find_next_prime(0);
// 	printf("%d\n", output);

// 	output = ft_find_next_prime(__INT_MAX__ - 5);
// 	printf("%d\n", output);

// 	output = ft_find_next_prime(32); // 31 37
// 	printf("%d\n", output);

// 	output = ft_find_next_prime(104724); // 104717	104723 104729
// 	printf("%d\n", output);
// 	return (0);
// }