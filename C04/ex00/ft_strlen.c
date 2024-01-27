/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:15:20 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/19 11:03:09 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// #include <string.h>

// /*  strcpy dest配列にsrcの文字列をコピーする */
// int	main(void)
// {
// 	char str[] = "abcdefg";
// 	int len_str;

// 	printf("%s\n", str);

// 	len_str = ft_strlen(str);
// 	printf("ft_strlen : %d\n", len_str);

// }