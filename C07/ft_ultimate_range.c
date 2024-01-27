/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 23:13:59 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/26 11:58:12 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	put_size;
// 	int	i;

// 	min = 2;
// 	max = 9;
// 	put_size = ft_ultimate_range(&range, min, max);
// 	if (put_size <= 0)
// 	{
// 		printf("Error!\n");
// 		return (1);
// 	}
// 	printf("size : %d\n", put_size);
// 	i = 0;
// 	while (i < put_size)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(range);
// 	return (0);
// }
