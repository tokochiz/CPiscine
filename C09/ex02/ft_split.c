/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:13:32 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/17 23:06:05 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_charset(char str, char *charset)
{
	while (*charset != '\0')
	{
		if (str == *charset)
		{
			return (1);
		}
		charset++	;
	}
	return (0);
}

int	words_count(char *str, char *charset)
{
	int	flag;
	int	same_charset;
	int	n;
	int	words;

	flag = 1;
	words = 0;
	n = 0;
	while (str[n] != '\0')
	{
		same_charset = check_charset(str[n], charset);
		while (same_charset == 0 && str[n] != '\0')
		{
			if (flag == 1 && words++ >= 0)
				flag = 0;
			n++;
			same_charset = check_charset(str[n], charset);
		}
		if (same_charset == 1)
			flag = 1;
		n++;
	}
	return (words);
}

char	*make_malloc_put_split(char *str, int length)
{
	int		i;
	char	*word;

	word = (char *)malloc(sizeof(char) * length + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = str[i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		words;
	int		length;
	char	**split;

	words = words_count(str, charset);
	split = (char **)malloc(sizeof(char *) * words + 1);
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		while (check_charset(str[j], charset))
			j++;
		length = 0;
		while (!check_charset(str[j], charset) && str[j] != '\0' && j++ >= 0)
			length++;
		split[i++] = make_malloc_put_split(&str[j - length], length);
	}
	split[words] = NULL;
	return (split);
}

int	main(void)
{
	char *str = "&&&5 4*776&";
	char charset[] = "";
	char **result;
	int words;
	int i;
	int j;

	printf("str[%s]charset[%s]\n", str, charset);
	result = ft_split(str, charset);
	words = words_count(str, charset);

	i = 0;
	while (i < words)
	{
		j = 0;
		while (result[i][j] != '\0')
		{
			printf("split[%d][%d]:[%c]\n", i, j, result[i][j]);
			j++;
		}
		puts("===");
		i++;
	}
	return (0);
}