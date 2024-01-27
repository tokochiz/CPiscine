/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:58:40 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/08/20 10:52:38 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void intput_map(char *str)
 {
	int i;
	int j;
	i = 0;
	j = 0;
	while (*str != '\0')
	{
		
	}
	write(1, "\n", 1);
	
 }

// col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left
//  row3left row4left row1right row2right row3right row4right"

int main(int argc, char **argv)
{
	int i;
	i = 1;

while(i < argc)
	{
		input_map(argv[i]);
	i++;
	}
	return 0;
}