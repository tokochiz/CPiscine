/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:11:41 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/16 19:42:33 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char *str = "Hello, world"; // 配列サイズを指定して初期化

	int strlen;
	strlen = ft_strlen(str);
	printf("%d\n", strlen);
	return (0);
}