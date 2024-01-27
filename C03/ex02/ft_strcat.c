/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:23:12 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 15:55:43 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_len;

	dest_len = dest;
	while (*dest_len != '\0')
	{
		dest_len++;
	}
	while (*src != '\0')
	{
		*dest_len = *src;
		src++;
		dest_len++;
	}
	*dest_len = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// /*
// メモリを確保
// */
// int	main(void)
// {
// 	char dest[20] = "Hello, ";
// 	char src[20] = "world!";
// 	char dest_t[20] = "Hello, ";
// 	char src_t[20] = "world!";

// 	ft_strcat(dest, src);
// 	strcat(dest_t, src_t);

// 	printf("ft_strcat: %s\n", dest);
// 	printf("strcat: %s\n", dest_t);

// 	return (0);
// }