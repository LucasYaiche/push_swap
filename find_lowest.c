/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:20:54 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/16 14:20:42 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_lowest(int *tab, int len)
{
	int	i;
	int	lowest;

	i = -1;
	lowest = tab[0];
	while (++i != len)
	{
		if (tab[i] < lowest)
			lowest = tab[i];
	}
	return (lowest);
}
