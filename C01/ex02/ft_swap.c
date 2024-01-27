/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:27:46 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/14 17:00:06 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 10;
// 	b = 20;

// 	printf("%d %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("%d %d\n", a, b);
// }