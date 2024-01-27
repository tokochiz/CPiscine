/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:10:27 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/16 19:11:23 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "0123";
// 	char str2[] = "Hello, wor1d!";
// 	char str3[] = "";

// 	printf("%d\n", ft_str_is_numeric(str1));
// 	printf("%d\n", ft_str_is_numeric(str2));
// 	printf("%d\n", ft_str_is_numeric(str3));
// }