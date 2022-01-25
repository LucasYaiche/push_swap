/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   red_button.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:28:37 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/23 15:36:14 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	panic_button(t_tab *tabs)
{
	if (tabs->tab_a)
		ft_free(&(tabs->tab_a));
	if (tabs->tab_b)
		ft_free(&(tabs->tab_b));
	ft_putstr_error("Error\n");
	exit(0);
}
