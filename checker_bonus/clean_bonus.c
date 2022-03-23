/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:44:38 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/23 16:10:23 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	clean(t_tab *tabs)
{
	if (tabs->tab_a)
		ft_free(&(tabs->tab_a));
	if (tabs->tab_b)
		ft_free(&(tabs->tab_b));
}
