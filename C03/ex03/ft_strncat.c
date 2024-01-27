/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:08:13 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 22:40:25 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_len;

	dest_len = dest;
	while (*dest_len != '\0')
	{
		dest_len++;
	}
	while (*src != '\0' && nb != 0)
	{
		*dest_len = *src;
		src++;
		dest_len++;
		nb--;
	}
	*dest_len = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

/*
メモリを確保
*/
int	main(void)
{
	char dest[20] = "Hello, ";
	char src[20] = "world!";
	char dest_t[20] = "Hello, ";
	char src_t[20] = "world!";
	unsigned nb = 10;

	ft_strncat(dest, src, nb);
	strncat(dest_t, src_t, nb);

	printf("ft_strcat: %s\n", dest);
	printf("strncat: %s\n", dest_t);

	return (0);
}