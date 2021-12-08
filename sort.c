/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:49:21 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/08 12:17:35 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	what_case(t_tab *tabs)
{
	int	place;

	place = find_place(tabs->tab_a);
	while (place >= 1)
	{
		if (check_recu(tabs, place))
		{
			fast_sort();
			break ;
		}
		else
		{
			slow_sort();
			place /= 10;
			if (place == 1)
				place--;
		}
	}	
}
