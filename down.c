/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:41:55 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/16 14:33:11 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	down(int *tab, int len)
{
	int	temp;
	int	last;
	int	len_max;

	len_max = --len;
	last = tab[len];
	while (len >= 0)
	{
		temp = tab[len];
		tab[len] = tab[len + 1];
		tab[len-- + 1] = temp;
	}
}
