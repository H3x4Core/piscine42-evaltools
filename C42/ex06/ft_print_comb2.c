/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <matwinte@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:42:55 by matwinte          #+#    #+#             */
/*   Updated: 2022/06/08 16:44:01 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Convert a 2 digit int into a char array of 2
void	int_to_char_array(int num_1, int num_2, char c_numb[])
{
	c_numb[0] = num_1 / 10 + '0';
	c_numb[1] = num_1 % 10 + '0';
	c_numb[2] = num_2 / 10 + '0';
	c_numb[3] = num_2 % 10 + '0';
}

// Write two bloc of two digit with a space in between
void	write_two_bloc(char c_numb[])
{
	write(1, &c_numb[0], 2);
	write(1, " ", 1);
	write(1, &c_numb[2], 2);
	if (c_numb[0] != '9' || c_numb[1] != '8')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		number_1;
	int		number_2;
	char	c_number[4];

	number_1 = 0;
	number_2 = 0;
	c_number[0] = '0';
	c_number[1] = '0';
	c_number[2] = '0';
	c_number[3] = '0';
	while (number_1 <= 99)
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{
			int_to_char_array(number_1, number_2, c_number);
			write_two_bloc(c_number);
			number_2++;
		}
		number_1++;
	}
}
