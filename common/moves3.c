/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:49:35 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/12/29 22:58:47 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_tab *tabs)
{
	sa(tabs);
	sb(tabs);
	ft_putstr("ss\n");
}

void	rr(t_tab *tabs)
{
	ra(tabs);
	rb(tabs);
	ft_putstr("rr\n");
}

void	rrr(t_tab *tabs)
{
	rra(tabs);
	rrb(tabs);
	ft_putstr("rrr\n");
}
