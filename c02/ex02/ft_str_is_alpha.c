/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:38:21 by ado-prad          #+#    #+#             */
/*   Updated: 2022/07/25 14:45:51 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'A' && str[x] <= 'Z')
			&& !(str[x] >= 'a' && str[x] <= 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}