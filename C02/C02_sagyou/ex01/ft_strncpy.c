/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:10:39 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 19:18:52 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p;

	p = dest;
	while (*src != '\0' && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (p);
}

#include <stdio.h>
#include <string.h>

/*
srcの先頭から最大n文字をdestにコピーする。
第1引数...コピー先の配列
第2引数...コピー元の文字配列
第3引数...コピーする文字数
*/

int	main(void)
{
	char dest[20] = "ABCDE";
	char src[20] = "123";
	// char dest_t[20];
	char dest_t[20] = "ABCDE";
	char src_t[20] = "123456789";
	int strlen_src;

	int n = 20;
	strlen_src = strlen(src_t);

	printf("before : %s\n", dest);
	*ft_strncpy(dest, src, n);
	printf("after : %s\n", dest);

	printf("before : %s\n", dest_t);
	strncpy(dest_t, src_t, n);
	// コピー元の文字列の長さ(src)がn以上の時は、n文字をコピー後に、終端文字を手動で付加
	if (strlen_src > n)
	{
		src_t[n] = '\0';
	}
	printf("after : %s\n", dest_t);
}