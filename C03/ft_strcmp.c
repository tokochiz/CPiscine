/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:11:24 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 15:55:31 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			ans = *s1 - *s2;
			if (ans < 0)
				return (-1);
			if (ans > 0)
				return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// /*
// s1 比較対象の文字列
// s2 比較対象の文字列
// 戻り値
// ・負の数 : 辞書順で、s1 の方が小さい（前に来る）とき
// ・正の数 : 辞書順で、s1 の方が大きい（後に来る）とき
// ・0 : s1 と s2 が同じ
// */
// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("abc", "abc"));
// 	printf("%d\n", ft_strcmp("dfghjk", "ab"));
// 	printf("%d\n", ft_strcmp("abc", "r7hjkl"));

// 	printf("%d\n", strcmp("abc", "abc"));
// 	printf("%d\n", strcmp("dfghjk", "ab"));
// 	printf("%d\n", strcmp("abc", "vcxs"));
// }