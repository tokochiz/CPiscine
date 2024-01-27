/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:50:41 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/16 19:10:50 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	char			*ptr;

	ptr = src;
	len = 0;
	while (*src != '\0')
	{
		len++;
		src++;
	}
	if (size == 0)
		return (len);
	src = ptr;
	while (*src != '\0' && size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// /*
// srcの先頭から最大n文字をdestにコピーする。
// 第1引数 dest コピー先の配列
// 第2引数 src コピー元の文字配列
// 第3引数 size コピーする文字数
// 戻り値　src の長さ　終端記号はカウントされない
// */

// int	main(void)
// {
// 	int				strlen_print;
// 	unsigned int	src_size_t;
// 	unsigned int	src_size;

// 	char dest[20] = "ABCDEFG";
// 	char src[20] = "1234";
// 	char dest_t[20] = "ABCDEFG";
// 	char src_t[20] = "1234";

// 	strlen_print = 0;
// 	src_size_t = 0;

// 	printf("before : %s\n", dest);
// 	src_size = ft_strlcpy(dest, src, strlen_print);
// 	printf("after : %s\n", dest);
// 	printf("dest_size : %d\n\n", src_size);

// 	printf("before : %s\n", dest_t);
// 	src_size_t = strlcpy(dest_t, src_t, strlen_print);
// 	printf("after : %s\n", dest_t);
// 	printf("dest_size : %u\n", src_size_t);
// }
