/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:32:49 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/26 11:50:42 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*set_memory;
	int	len;
	int	temp_min;
	int	*top_address;

	if (min >= max)
		return (NULL);
	len = max - min;
	set_memory = (int *)malloc(sizeof(int) * len);
	if (set_memory == NULL)
		return (NULL);
	top_address = set_memory;
	temp_min = min;
	while (temp_min < max)
	{
		*set_memory = temp_min;
		set_memory++;
		temp_min++;
	}
	*set_memory = '\0';
	return (top_address);
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*put_array;
	int	i;

	min = 2;
	max = 9;
	put_array = ft_range(min, max);
	if (put_array == NULL)
	{
		printf("Error!\n");
		return (1);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d ", put_array[i]);
		i++;
	}
	printf("\n");
	free(put_array);
	return (0);
}
