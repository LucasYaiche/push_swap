/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:20:05 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/10 13:25:18 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_tab *tabs)
{
	int	temp;

	temp = tabs->tab_a[0];
	tabs->tab_a[0] = tabs->tab_a[1];
	tabs->tab_a[1] = temp;
}

void	pa(t_tab *tabs)
{
	int	temp;

	temp = tabs->tab_b[0];
	down(tabs->tab_a);
	int i = 7;
	while (--i > 0)
		printf("%i ", tabs->tab_a[i]);
	printf("\n");
	// KC 
	tabs->tab_a[0] = temp;
	tabs->tab_b[0] = '\0';
	up(tabs->tab_b);
}

void	pb(t_tab *tabs)
{
	int	temp;

	temp = tabs->tab_a[0];
	down(tabs->tab_b);
	tabs->tab_b[0] = temp;
	tabs->tab_a[0] = '\0';
	up(tabs->tab_a);
}

void	rra(t_tab *tabs)
{
	int	temp;
	int	last;
	int	len;

	len = 0;
	while (tabs->tab_a[len])
		len++;
	len--;
	last = tabs->tab_a[len];
	tabs->tab_a[len] = 0;
	while (len >= 0)
	{
		temp = tabs->tab_a[len];
		tabs->tab_a[len] = tabs->tab_a[len + 1];
		tabs->tab_a[len-- + 1] = temp;
	}
	tabs->tab_a[0] = last;
}

void	ra(t_tab *tabs)
{
	int	first;
	int	len;

	len = 0;
	first = tabs->tab_a[0];
	while (tabs->tab_a[len + 1])
	{
		tabs->tab_a[len] = tabs->tab_a[len + 1];
		len++;
	}
	tabs->tab_a[len] = first;
}
