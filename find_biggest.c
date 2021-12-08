/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:20:00 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/08 11:27:19 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(int *tab)
{
	int	i;
	int	biggest;

	i = -1;
	biggest = tab[0];
	while (tab[++i])
	{
		if (tab[i] > biggest)
			biggest = tab[i];
	}
	return (biggest);
}
