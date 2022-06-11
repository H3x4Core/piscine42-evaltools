/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <matwinte@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:35:53 by matwinte          #+#    #+#             */
/*   Updated: 2022/06/08 16:42:32 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '0';
	number[2] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, number, 3);
				if (number[0] != '7' || number[1] != '8' || number[2] != '9')
				{
					write(1, ", ", 2);
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
