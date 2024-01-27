/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:24:02 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/15 18:18:10 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
// 	char str1[] = "ABCDE";
// 	char str2[] = "Hello, wor1d!";
// 	char str3[] = "";

// 	printf("%d\n", ft_str_is_uppercase(str1));
// 	printf("%d\n", ft_str_is_uppercase(str2));
// 	printf("%d\n", ft_str_is_uppercase(str3));
// }