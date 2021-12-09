/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:41:55 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/09 18:33:15 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	down(int *tab)
{
	int	temp;
	int	last;
	int	len;
	int	len_max;

	len = 0;
	while (tab[len])
		len++;
	len_max = --len;
	last = tab[len];
	tab[len] = 0;
	while (len >= 0)
	{
		temp = tab[len];
		tab[len] = tab[len + 1];
		tab[len-- + 1] = temp;
	}
	tab[len_max] = last;
}
