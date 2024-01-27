/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 08:29:47 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/28 20:19:30 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *str, char *src)
{
	char	*copy_start;

	copy_start = str;
	while (*src != '\0')
	{
		*copy_start = *src;
		src++;
		copy_start++;
	}
	*copy_start = '\0';
	return (str);
}

char	*ft_strdup(char *str)
{
	char	*set_memory;
	int		len_str;

	if (str == NULL)
		return (0);
	len_str = ft_strlen(str);
	set_memory = (char *)malloc(sizeof(char) * (len_str + 1));
	if (set_memory == NULL)
	{
		return (NULL);
	}
	ft_strcpy(set_memory, str);
	return (set_memory);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_str[i].str = 0;
	return (stock_str);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	t_stock_str	*stock_str;
// 	int			i;

// 	stock_str = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (stock_str == NULL)
// 	{
// 		printf("stock_str is NULL");
// 		return (1);
// 	}
// 	i = 0;
// 	while (stock_str[i].str != NULL)
// 	{
// 		printf("%d\n", stock_str[i].size);
// 		printf("%s\n", stock_str[i].str);
// 		printf("%s\n", stock_str[i].copy);
// 		i++;
// 	}
// 	i = 0;
// 	while (stock_str[i].str != 0)
// 	{
// 		free(stock_str[i].copy);
// 		i++;
// 	}
// 	free(stock_str);
// 	return (0);
// }
