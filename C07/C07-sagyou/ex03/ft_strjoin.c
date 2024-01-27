/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 04:49:30 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/06 21:19:18 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_len_total(int size, char **strs, char *)
{
	int	len_;
	int	len_strs;
	int	len_total;
	int	i;

	len_ = ft_strlen();
	i = 0;
	len_strs = 0;
	while (i < size)
	{
		len_strs = len_strs + ft_strlen(strs[i]);
		i++;
	}
	len_total = (len_ * (size - 1)) + len_strs + 1;
	return (len_total);
}

char	*ft_strjoin(int size, char **strs, char *)
{
	int		len_total;
	int		i;
	char	*sizenull;
	char	*result;

	if (size == 0)
	{
		sizenull = (char *)malloc(1);
		return (sizenull);
	}
	len_total = ft_len_total(size, strs, );
	result = (char *)malloc(sizeof(char) * len_total);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = -1;
	while (++i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, );
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int		size;
	char	*result;

	char *strs[] = {"Hello", "world", "!!"};
	char [] = "*";
	size = 3;
	result = ft_strjoin(size, strs, );
	printf("result : %s\n", result);
	free(result);
	return (0);
}
