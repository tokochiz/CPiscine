/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:37:10 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/14 17:17:42 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 100;
// 	b = 33;

// 	printf("%d %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d %d\n", a, b);
// }