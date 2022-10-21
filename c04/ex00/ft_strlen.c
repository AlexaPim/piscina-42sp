/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:04:14 by ado-prad          #+#    #+#             */
/*   Updated: 2022/07/27 16:55:15 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	c;
	int		x;

	x = 0;
	c = 0;
	while (str[x] != c)
	{
		x++;
	}
	return (x);
}
