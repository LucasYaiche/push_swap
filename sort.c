/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:49:21 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/09 19:14:07 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	what_case(t_tab *tabs)
{
	if (tabs->len == 2)
		case_2(tabs);
	else if (tabs->len == 3)
		case_3(tabs);
	else if (tabs->len == 4)
		case_4(tabs);
	else if (tabs->len == 5)
		case_5(tabs);
}
