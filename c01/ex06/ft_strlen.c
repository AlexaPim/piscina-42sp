/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:14:41 by ado-prad          #+#    #+#             */
/*   Updated: 2022/07/21 18:47:56 by ado-prad         ###   ########.fr       */
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
