/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:47:20 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/23 15:18:58 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_tab(t_tab *tabs, char **argv)
{
	int	i;

	i = -1;
	while (++i < tabs->len_a)
		tabs->tab_a[i] = ft_atoi(argv[i], tabs);
}
