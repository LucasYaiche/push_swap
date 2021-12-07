/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_recu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:54:30 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/07 18:58:15 by lyaiche          ###   ########.fr       */
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

int	check_recu(t_tab *tabs)
{
	int	*checker;
	int	i;
	int	place;

	checker = ft_calloc(9);
	if (!checker)
		panic_button(tabs);
	i = -1;
	place = find_place(tabs->tab_a);
	while (tabs->tab_a[++i])
	{
		if (checker[(tabs->tab_a[i] / place) % 10] == 1)
			return (1);
		else
			checker[(tabs->tab_a[i] / place) % 10] = 1;
	}
	return (0);
}
