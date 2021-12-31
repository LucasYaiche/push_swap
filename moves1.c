/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:20:05 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/29 22:58:53 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_tab *tabs)
{
	int	temp;
	int	i;

	i = 0;
	while (i < tabs->len_a)
		i++;
	if (i > 1)
	{
		temp = tabs->tab_a[0];
		tabs->tab_a[0] = tabs->tab_a[1];
		tabs->tab_a[1] = temp;
		ft_putstr("sa\n");
	}
}

void	pa(t_tab *tabs)
{
	int	temp;

	if (tabs->len_b != 0)
	{
		temp = tabs->tab_b[0];
		down(tabs->tab_a, tabs->len_a);
		tabs->tab_a[0] = temp;
		tabs->tab_b[0] = '\0';
		up(tabs->tab_b, tabs->len_b);
		tabs->len_a++;
		tabs->len_b--;
		ft_putstr("pa\n");
	}
}

void	pb(t_tab *tabs)
{
	int	temp;

	if (tabs->len_a != 0)
	{
		temp = tabs->tab_a[0];
		down(tabs->tab_b, tabs->len_b);
		tabs->tab_b[0] = temp;
		tabs->tab_a[0] = '\0';
		up(tabs->tab_a, tabs->len_a);
		tabs->len_a--;
		tabs->len_b++;
		ft_putstr("pb\n");
	}
}

void	rra(t_tab *tabs)
{
	int	temp;
	int	last;
	int	len;

	len = tabs->len_a - 1;
	last = tabs->tab_a[len];
	tabs->tab_a[len] = 0;
	while (len >= 0)
	{
		temp = tabs->tab_a[len];
		tabs->tab_a[len] = tabs->tab_a[len + 1];
		tabs->tab_a[len-- + 1] = temp;
	}
	tabs->tab_a[0] = last;
	ft_putstr("rra\n");
}

void	ra(t_tab *tabs)
{
	int	first;
	int	len;

	len = 0;
	first = tabs->tab_a[0];
	while (len < tabs->len_a)
	{
		tabs->tab_a[len] = tabs->tab_a[len + 1];
		len++;
	}
	tabs->tab_a[len - 1] = first;
	ft_putstr("ra\n");
}
