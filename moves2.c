/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:24:26 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/12/29 22:49:01 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_tab *tabs)
{
	int	temp;
	int	i;

	i = 0;
	while (i < tabs->len_b)
		i++;
	if (i > 1)
	{
		temp = tabs->tab_b[0];
		tabs->tab_b[0] = tabs->tab_b[1];
		tabs->tab_b[1] = temp;
		ft_putstr("sb\n");
	}
}

void	rrb(t_tab *tabs)
{
	int	temp;
	int	last;
	int	len;

	len = tabs->len_b - 1;
	last = tabs->tab_b[len];
	tabs->tab_b[len] = 0;
	while (len >= 0)
	{
		temp = tabs->tab_b[len];
		tabs->tab_b[len] = tabs->tab_b[len + 1];
		tabs->tab_b[len-- + 1] = temp;
	}
	tabs->tab_b[0] = last;
	ft_putstr("rrb\n");
}

void	rb(t_tab *tabs)
{
	int	first;
	int	len;

	len = 0;
	first = tabs->tab_b[0];
	while (len < tabs->len_b)
	{
		tabs->tab_b[len] = tabs->tab_b[len + 1];
		len++;
	}
	tabs->tab_b[len - 1] = first;
	ft_putstr("rb\n");
}
