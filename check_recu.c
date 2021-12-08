/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_recu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:54:30 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/08 11:27:36 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_recu(t_tab *tabs, int place)
{
	int	*checker;
	int	i;

	checker = ft_calloc(9);
	if (!checker)
		panic_button(tabs);
	i = -1;
	while (tabs->tab_a[++i])
	{
		if (checker[(tabs->tab_a[i] / place) % 10] == 1)
			return (1);
		else
			checker[(tabs->tab_a[i] / place) % 10] = 1;
	}
	return (0);
}
