/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:25:52 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/15 18:18:07 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 32 || *str > 127)
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
// 	char str1[] = "ABCDE\n";
// 	char str2[] = "Hello, wor1d";
// 	char str3[] = "";
// 	char str4[] = "こんにちは∂ßƒ";

// 	printf("%d\n", ft_str_is_printable(str1));
// 	printf("%d\n", ft_str_is_printable(str2));
// 	printf("%d\n", ft_str_is_printable(str3));
// 	printf("%d\n", ft_str_is_printable(str4));

// 	return (0);
// }