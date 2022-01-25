/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:34:11 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/23 15:36:02 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end(t_tab *tabs)
{
	if (tabs->tab_a)
		ft_free(&(tabs->tab_a));
	if (tabs->tab_b)
		ft_free(&(tabs->tab_b));
	exit(0);
}
