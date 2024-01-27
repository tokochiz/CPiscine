/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:48:12 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/15 18:18:01 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "abcDEFg";
// 	char str2[] = "Hello, wor1d!";

// 	printf("%s\n", ft_strupcase(str1));
// 	printf("%s\n", ft_strupcase(str2));

// 	return (0);
// }