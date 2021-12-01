/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:46:39 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/01 16:45:54 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**create_tab(int len, char **argv)
{
	int	**tab;
	int	i;

	*tab = ft_calloc(len + 1);
	i = -1;
	while (++i < len)
		tab[i] = ft_calloc(ft_strlen(argv[i]));
	return (*tab);
}
