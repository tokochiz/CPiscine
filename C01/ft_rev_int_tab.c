/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:22:35 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/14 16:57:10 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	top;
	int	end;
	int	tmp;

	top = 0;
	end = size - 1;
	while (top < size / 2)
	{
		tmp = tab[top];
		tab[top] = tab[end];
		tab[end] = tmp;
		top++;
		end--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	int size;

// 	size = 5;
// 	for (int i = 0; i < size; i++)
// 		printf("%d ", tab[i]);
// 	printf("\n");

// 	ft_rev_int_tab(tab, size);

// 	for (int i = 0; i < size; i++)
// 		printf("%d ", tab[i]);
// 	printf("\n");

// 	return (0);
// }