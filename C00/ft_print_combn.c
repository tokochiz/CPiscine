/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:45:06 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/14 12:48:31 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdbool.h>
#include <stdio.h>

void	print_combination(int number, int n)
{
	bool	first;

	bool used[10] = {false};
	for (int i = 0; i < n; i++)
	{
		used[number % 10] = true;
		number /= 10;
	}
	first = true;
	for (int i = 0; i < 10; i++)
	{
		if (used[i])
		{
			if (!first)
			{
				// printf(", ");
			}
			printf("%d", i);
			first = false;
		}
	}
	printf("\n");
}

void	generate_combinations(int n, int length, int number)
{
	if (length == n)
	{
		print_combination(number, n);
		return ;
	}
	for (int i = (length == 0 ? 1 : number % 10 + 1); i <= 9; i++)
	{
		generate_combinations(n, length + 1, number * 10 + i);
	}
}

void	ft_print_combn(int n)
{
	generate_combinations(n, 0, 0);
}

int	main(void)
{
	int n = 3; // 例: 最大桁数が9の場合
	ft_print_combn(n);
	return (0);
}

*/