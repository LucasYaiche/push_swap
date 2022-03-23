/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:44:38 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/23 15:32:42 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	clean(t_tab *tabs)
{
	if (tabs->tab_a)
		ft_free(&(tabs->tab_a));
	if (tabs->tab_b)
		ft_free(&(tabs->tab_b));
}
