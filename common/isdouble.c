/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdouble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:37:39 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/15 21:12:03 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isdouble(int *tab, int len)
{
	int	i;
	int	j;

	i = -1;
	while (++i < len)
	{
		j = -1;
		while (++j < len)
			if (i != j)
				if (tab[i] == tab[j])
					return (1);
	}
	return (0);
}
