/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:05:11 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/16 19:12:57 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_strlowcase(char *str, int flag)
{
	if (flag && (*str >= 'a' && *str <= 'z'))
		*str = *str - 32;
	if (!flag && (*str >= 'A' && *str <= 'Z'))
		*str = *str + 32;
}

char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*tail;

	tail = str;
	flag = 1;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9'))
		{
			change_strlowcase(str, flag);
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		str++;
	}
	return (tail);
}

// #include <stdbool.h>
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "hello, wor1d!asd/f*d hello";
// 	char str2[] = "salut,coMment tu vas ?42Mots 
// quarM3nte-deux; cinquante+et+un";
// 	printf("%s\n", str1);
// 	printf("%s\n", ft_strcapitalize(str1));
// 	printf("%s\n", str2);
// 	printf("%s\n", ft_strcapitalize(str2));
// 	return (0);
// }