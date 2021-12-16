/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_indexlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:41:21 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/16 17:49:04 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_tab(t_tab *tabs)
{
	int	*returned;
	int	i;

	returned = ft_calloc(tabs->len_a + 2);
	if (!returned)
		panic_button(tabs);
	i = -1;
	while (++i < tabs->len_a)
		returned[i] = tabs->tab_a[i];
	// i = -1;
	// while (++i < tabs->len_a)
	// 	printf("%i ", returned[i]);
	// printf("\n");
	return (returned);
}

void	index_list_2(t_tab *tabs)
{
	int	i;
	int	j;

	// i = -1;
	// while (++i < tabs->len_a)
	// 	printf("%i ", tabs->tab_index[i]);
	// printf("\n");
	i = -1;
	while (++i < tabs->len_a)
	{
		j = 0;
		while (tabs->tab_index[j] != tabs->tab_a[i] && j < tabs->len_a)
			j++;
		tabs->tab_a[i] = j;
	}
	// i = -1;
	// while (++i < tabs->len_a)
	// 	printf("%i ", tabs->tab_a[i]);
	// printf("\n");
}

void	index_list(t_tab *tabs)
{
	int	i;
	int	temp;

	tabs->tab_index = create_tab(tabs);
	while (!issort(tabs->tab_index, tabs->len_a))
	{
		i = -1;
		while (++i < tabs->len_a)
		{
			if (tabs->tab_index[i] > tabs->tab_index[i + 1])
			{
				temp = tabs->tab_index[i];
				tabs->tab_index[i] = tabs->tab_index[i + 1];
				tabs->tab_index[i + 1] = temp;
			}
		}
	}
	//up(tabs->tab_index, tabs->len_a);
	// i = -1;
	// while (++i <= tabs->len_a)
	// printf("%i ", tabs->tab_index[i]);
	// printf("\n");
	index_list_2(tabs);
}
