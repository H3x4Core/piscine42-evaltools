/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <matwinte@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:45:00 by matwinte          #+#    #+#             */
/*   Updated: 2022/06/08 17:16:09 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c_nb[10];
	int		i;

	i = 0;
	if (nb < 0)
		ft_putchar('-');
	if (nb == 0)
		ft_putchar('0');
	if (nb != 0)
	{
		while (nb != 0)
		{
			if (nb < 0)
				c_nb[i] = ((nb % 10) * -1 + '0');
			else
				c_nb[i] = (nb % 10 + '0');
			nb = nb / 10;
			i++;
		}
		while (i >= 0)
		{
			i--;
			ft_putchar(c_nb[i]);
		}
	}
}
