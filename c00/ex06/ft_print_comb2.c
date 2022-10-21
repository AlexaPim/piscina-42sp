/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:32:08 by ado-prad          #+#    #+#             */
/*   Updated: 2022/07/16 16:25:57 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_putchar(x / 10 + '0');
			ft_putchar(x % 10 + '0');
			ft_putchar(' ');
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			if ((x / 10 != 9) || (x % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}
