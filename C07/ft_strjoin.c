/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 04:49:30 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/26 11:58:19 by  ctokoyod        ###   ########.fr       */
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

int	ft_len_total(int size, char **strs, char *sep)
{
	int	len_sep;
	int	len_strs;
	int	len_total;
	int	i;

	len_sep = ft_strlen(sep);
	i = 0;
	len_strs = 0;
	while (i < size)
	{
		len_strs = len_strs + ft_strlen(strs[i]);
		i++;
	}
	len_total = (len_sep * (size - 1)) + len_strs + 1;
	return (len_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
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
	len_total = ft_len_total(size, strs, sep);
	result = (char *)malloc(sizeof(char) * len_total);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = -1;
	while (++i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		size;
// 	char	*result;

// 	char *strs[] = {"Hello", "world", "!!"};
// 	char sep[] = "*";
// 	size = 3;
// 	result = ft_strjoin(size, strs, sep);
// 	printf("result : %s\n", result);
// 	free(result);
// 	return (0);
// }
