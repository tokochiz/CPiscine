/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:12:17 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 20:01:22 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p_str;
	char	*p_tofind;
	int		i;
	int		j;

	p_str = str;
	p_tofind = to_find;
	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (p_str[i] != '\0')
	{
		while (p_str[i + j] != '\0' && p_str[i + j] == p_tofind[j])
		{
			j++;
		}
		if (p_tofind[j] == '\0')
		{
			return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// /*
// string search
// */
// int	main(void)
// {
// 	char str[20] = "Hello, ";
// 	char to_find[20] = "llo";
// 	char str_t[20] = "Hello, "; // 探す対象
// 	char to_find_t[20] = "llo"; // 探すパターン

// 	char *sp;
// 	char *sp_t;

// 	sp = ft_strstr(str, to_find);
// 	sp_t = strstr(str_t, to_find_t);

// 	printf("ft_strstr: %s\n", sp);
// 	printf("strstr: %s\n", sp_t);
// }