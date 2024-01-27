/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:28:43 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/13 20:38:26 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	symbol;

	if (n < 0)
	{
		symbol = 'N';
		write(1, &symbol, 1);
	}
	else
	{
		symbol = 'P';
		write(1, &symbol, 1);
	}
}

// int main()
// {
//     ft_is_negative(-200);
//     return (0);
// }