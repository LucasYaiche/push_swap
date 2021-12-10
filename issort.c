/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:34:29 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/09 19:31:33 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issort(t_tab *tabs)
{
	int	i;
	int	temp;

	i = 0;
	temp = tabs->tab_a[0];
	while (tabs->tab_a[++i])
	{
		if (temp > tabs->tab_a[i])
			return (0);
		temp = tabs->tab_a[i];
	}
	return (1);
}