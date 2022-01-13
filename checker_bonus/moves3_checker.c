/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:49:35 by lucasyaiche       #+#    #+#             */
/*   Updated: 2022/01/13 16:39:06 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss_checker(t_tab *tabs)
{
	sa(tabs);
	sb(tabs);
}

void	rr_checker(t_tab *tabs)
{
	ra(tabs);
	rb(tabs);
}

void	rrr_checker(t_tab *tabs)
{
	rra(tabs);
	rrb(tabs);
}
