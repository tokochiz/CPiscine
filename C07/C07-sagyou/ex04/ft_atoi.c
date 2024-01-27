/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:33:06 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/27 21:47:08 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int	is_space(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str != '\0')
	{
		while (is_space(str))
		{
			str++;
		}
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = sign * -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		return (result * sign);
	}
	return (0);
}

/*

int	is_space(int c);
引数c が空白文字であれば 0以外を返し、そうでなければ 0 を返す。

*/
int	main(void)
{
	int	value;

	char str[50] = " ---+--+1234ab567";
	value = ft_atoi(str);
	printf("%d\n", value);
	return (0);
}
