/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:24:26 by lucasyaiche       #+#    #+#             */
/*   Updated: 2022/01/24 15:01:59 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sb_checker(t_tab *tabs)
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
	}
}

void	rrb_checker(t_tab *tabs)
{
	int	temp;
	int	last;
	int	len;

	if (tabs->len_b)
	{
		last = tabs->tab_b[tabs->len_b];
		tabs->tab_b[tabs->len_b] = 0;
		len = tabs->len_b - 1;
		while (len >= 0)
		{
			temp = tabs->tab_b[len];
			tabs->tab_b[len] = tabs->tab_b[len + 1];
			tabs->tab_b[len-- + 1] = temp;
		}
		tabs->tab_b[0] = last;
	}
}

void	rb_checker(t_tab *tabs)
{
	int	first;
	int	len;

	if (tabs->len_b)
	{
		len = 0;
		first = tabs->tab_b[0];
		while (len < tabs->len_b)
		{
			tabs->tab_b[len] = tabs->tab_b[len + 1];
			len++;
		}
		tabs->tab_b[len - 1] = first;
	}
}
