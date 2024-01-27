/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:29:15 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/26 11:51:03 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

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

char	*ft_strdup(char *src)
{
	char	*set_memory;
	int		len_src;

	if (src == NULL)
		return (0);
	len_src = ft_strlen(src);
	set_memory = (char *)malloc(sizeof(char) * (len_src + 1));
	if (set_memory == NULL)
	{
		return (NULL);
	}
	ft_strcpy(set_memory, src);
	return (set_memory);
}

#include <stdio.h>

int	main(void)
{
	char	*dest;
	char	*src;

	dest = "Hello, world!";
	src = ft_strdup(dest);
	if (src != NULL)
	{
		printf("dest: %s\n", dest);
		printf("src: %s\n", src);
		// 確保したメモリは必ず解放する
		free(src);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
