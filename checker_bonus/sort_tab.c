/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:13:13 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/24 15:02:16 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	sort_tab(char *line, t_tab *tab)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa_checker(tab);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb_checker(tab);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss_checker(tab);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa_checker(tab);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb_checker(tab);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra_checker(tab);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb_checker(tab);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr_checker(tab);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra_checker(tab);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb_checker(tab);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr_checker(tab);
}
