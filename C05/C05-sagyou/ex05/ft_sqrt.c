/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:12:27 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/25 21:02:20 by  ctokoyod        ###   ########.fr       */
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
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int nb;
	int output;

	nb = __INT_MAX__; // 0
	output = ft_sqrt(nb);
	printf("%d\n", output);

	nb = 2147395600; // 46340
	output = ft_sqrt(nb);
	printf("%d\n", output);

	nb = 144;
	output = ft_sqrt(nb);
	printf("%d\n", output);

	nb = 25;
	output = ft_sqrt(nb);
	printf("%d\n", output);

	nb = 5;
	output = ft_sqrt(nb);
	printf("%d\n", output);

	nb = -1;
	output = ft_sqrt(nb);
	printf("%d\n", output);
	return (0);
}