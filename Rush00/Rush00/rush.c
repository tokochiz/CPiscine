/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:06:23 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/12 18:03:15 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void    repeat(int i, int j, int x, int y);
void    ft_putchar(char c, int i);

void    rush(int x, int y)
{
    int i;
    int j;
    char    line;

    line = '\n';

    i = 1;
    while( i <= y)
    {
        j = 1;
        while ( j <= x)
        {
            repeat(i, j, x, y);
            j++;
        }
        ft_putchar(line, 1);
        i++;
    }
}

void    repeat(int i, int j, int x, int y)
{
    char    c;
    
    // 頂点|| (i == 1 && j == y) || (i == x && j == y)
    if ((i == 1 && j == 1) || (i == 1 && j == x) || (i == y && j == 1) || (i == y && j == x))
    {
        c = 'o';
        ft_putchar(c, 1);
    }
    // 縦列
    else if ((i == 1 || i == y || j == 1 || j == x))
    {
        c = '-';
        ft_putchar(c, 1);
    }
    else 
    {
        c = ' ';
        ft_putchar(c, 1);
    }
}