/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:34:29 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/15 21:39:55 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issort(int *tab, int len)
{
	int	i;
	int	temp;

	i = -1;
	temp = tab[0];
	while (++i < len)
	{
		if (temp > tab[i])
			return (0);
		temp = tab[i];
	}
	return (1);
}
