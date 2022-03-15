/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:49:35 by lucasyaiche       #+#    #+#             */
/*   Updated: 2022/03/15 22:00:06 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss_checker(t_tab *tabs)
{
	sa_checker(tabs);
	sb_checker(tabs);
}

void	rr_checker(t_tab *tabs)
{
	ra_checker(tabs);
	rb_checker(tabs);
}

void	rrr_checker(t_tab *tabs)
{
	rra_checker(tabs);
	rrb_checker(tabs);
}
