/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:26:37 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/08 11:27:07 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_place(int	*tab)
{
	int	place;
	int	number;

	number = find_biggest(tab);
	place = 1;
	while (number > 10)
	{
		number /= 10;
		place *= 10;
	}
	return (place);
}
