/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:01:11 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/20 11:42:31 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	f1;
	int	f2;

	i = index;
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	if (index <= 0)
	{
		return (-1);
	}
	f1 = ft_fibonacci(i - 1);
	f2 = ft_fibonacci(i - 2);
	return (f1 + f2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int index;
// 	int output;

// 	index = 7;
// 	output = ft_fibonacci(index);
// 	printf("%d\n", output);
// 	return (0);
// }