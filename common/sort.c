/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:49:21 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/16 13:38:40 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	what_case(t_tab *tabs)
{
	if (tabs->len_a == 2)
		case_2(tabs);
	else if (tabs->len_a == 3)
		case_3(tabs);
	else if (tabs->len_a == 4)
		case_4(tabs);
	else if (tabs->len_a == 5)
		case_5(tabs);
	else
	{
		index_list(tabs);
		ft_radixsort(tabs);
	}
}
