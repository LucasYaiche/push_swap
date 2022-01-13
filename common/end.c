/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:34:11 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/15 18:34:55 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end(t_tab *tabs)
{
	if (tabs->tab_a)
		ft_free(&(tabs->tab_a));
	if (tabs->tab_b)
		ft_free(&(tabs->tab_b));
	if (tabs->tab_index)
		ft_free(&(tabs->tab_index));
	exit(0);
}
