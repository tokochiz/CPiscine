/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:50:45 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/15 18:25:26 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*ptr;

	ptr = dest;
	i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// /*  strcpy dest配列にsrcの文字列をコピーする */
// int	main(void)
// {
// 	char dest[] = "123";
// 	char src[] = "abcdefg";
// 	char t_dest[] = "12345";
// 	char t_src[] = "abcdefg";

// 	printf("%s %s\n", dest, src);

// 	ft_strcpy(dest, src);
// 	printf("ft_strcpy : %s %s\n", dest, src);
// 	//  dest配列にsrcの文字列をコピーする
// 	strcpy(t_dest, t_src);
// 	printf("strcpy : %s %s\n", dest, src);
// }