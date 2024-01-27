/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:03:38 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/26 16:24:37 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define N 256 // 1行の最大文字数（バイト数）
#define ROW 1 //読み込むファイルのデータの行数

typedef struct str {
	char str[30];
}data;


int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v')
		{
			str++;
		}
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = sign * -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		resturn(result * sign);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	FILE *fp; //FILE構造体
	char filename[] = "";
	char line[N];
	char str1[16], str2[16];
	int number;
	int i;

	if (argc < 3)
		write(1, "Error\n", 6);

	// 辞書ファイルを読み込む
	FILE *file;
	file = fopen("test.txt", "r");
	if(file == NULL){
		printf("%s file not open!\n", filename);
		return (-1);
	}
	fscanf(file, "%d", &i);
	fclose(file)
	// 数値に変換

	if (ft_str_is_numeric(argv[1]))
		number = ft_atoi(argv[1]);
	else
		write(1, "Error\n", 6);

	return 0;
}