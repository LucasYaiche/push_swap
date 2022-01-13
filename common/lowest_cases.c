/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_cases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:42:23 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/16 16:15:03 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_2(t_tab *tabs)
{
	ra(tabs);
}

void	case_3(t_tab *tabs)
{
	if (find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[0]
		&& find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[1])
	{
		rra(tabs);
		sa(tabs);
	}
	else if (find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[0]
		&& find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[1])
	{
		ra(tabs);
	}
	else if (find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[0])
	{
		ra(tabs);
		sa(tabs);
	}
	else if (find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[1]
		&& find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[2])
	{
		rra(tabs);
	}
	else if (find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[2]
		&& find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[1])
		sa(tabs);
}

void	case_4_2(t_tab *tabs)
{
	if (find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[3])
	{
		rra(tabs);
		pb(tabs);
		case_3(tabs);
		pa(tabs);
		ra(tabs);
	}
	else if (find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[1])
	{
		ra(tabs);
		pb(tabs);
		case_3(tabs);
		pa(tabs);
	}
	else if (find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[2])
	{
		ra(tabs);
		ra(tabs);
		pb(tabs);
		case_3(tabs);
		pa(tabs);
	}
}

void	case_4(t_tab *tabs)
{
	if (find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[0])
	{
		pb(tabs);
		case_3(tabs);
		pa(tabs);
	}
	else if (find_biggest(tabs->tab_a, tabs->len_a) == tabs->tab_a[0])
	{
		pb(tabs);
		case_3(tabs);
		pa(tabs);
		ra(tabs);
	}
	else if (find_lowest(tabs->tab_a, tabs->len_a) == tabs->tab_a[3])
	{
		rra(tabs);
		pb(tabs);
		case_3(tabs);
		pa(tabs);
	}
	else
		case_4_2(tabs);
}

void	case_5(t_tab *tabs)
{
	int	count;

	count = 0;
	while (find_lowest(tabs->tab_a, tabs->len_a) != tabs->tab_a[count]
		&& count < 3)
		count++;
	if (count < 3)
		while (find_lowest(tabs->tab_a, tabs->len_a) != tabs->tab_a[0])
			ra(tabs);
	else
		while (find_lowest(tabs->tab_a, tabs->len_a) != tabs->tab_a[0])
			rra(tabs);
	pb(tabs);
	case_4(tabs);
	pa(tabs);
}
