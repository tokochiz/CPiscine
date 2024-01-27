/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:59:55 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 15:56:13 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len_str(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	space;
	unsigned int	count;
	char			*tail_dest;

	len_dest = len_str(dest);
	len_src = len_str(src);
	tail_dest = dest + len_dest;
	if (size <= len_dest)
		return (size + len_src);
	space = size - len_dest - 1;
	count = 0;
	while (count < space && *src != '\0')
	{
		*tail_dest = *src;
		src++;
		tail_dest++;
		count++;
	}
	*tail_dest = '\0';
	return (len_dest + len_src);
}

// #include <stdio.h>
// #include <string.h>

// /*
// 	strlcat・・・destとsrcを結合

// 	返り値
// 	・dest文字数がsize以上の時は（size＋src文字数）
// 	・sizeよりdestの文字数が小さい時は時は（dest文字数＋src文字数）

// */
// int	main(void)
// {
// 	char dest[20] = "ABCDE";
// 	char src[20] = "1234";
// 	char dest_t[20] = "ABCDE";
// 	char src_t[20] = "1234";
// 	unsigned int size = 13;
// 	unsigned int check_f;
// 	unsigned int check_t;

// 	check_f = ft_strlcat(dest, src, size);
// 	check_t = strlcat(dest_t, src_t, size);

// 	printf("ft_strlcat: %u\n", check_f);
// 	printf("strlcat: %u\n", check_t);

// 	printf("ft_strlcat result: %s\n", dest);
// 	printf("strlcat result: %s\n", dest_t);

// 	return (0);
// }