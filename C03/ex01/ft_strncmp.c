/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:27:07 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/17 20:02:01 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	unsigned int comparing_len = 5;
//     printf("%d\n", ft_strncmp("abcde","abc", comparing_len));
//     printf("%d\n", ft_strncmp("abcde","ab", comparing_len ));
//     printf("%d\n", ft_strncmp("abcde","abc123", comparing_len));

//     printf("%d\n", strncmp("abcde","abc", comparing_len));
//     printf("%d\n", strncmp("abcde","ab", comparing_len ));
//     printf("%d\n", strncmp("abcde","abc123", comparing_len));
// }