/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:47:20 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/02 21:54:07 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_tab(int *tab, char **argv)
{
	int	i;

	i = -1;
	while (argv[++i])
		tab[i] = ft_atoi(argv[i]);
	return (tab);
}