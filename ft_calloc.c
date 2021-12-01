/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:17:27 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/01 16:45:18 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_calloc(size_t len)
{
	int		*tab;
	size_t	count;

	tab = malloc(sizeof(int) * len);
	if (!tab)
		panic_button();
	count = 0;
	while (len > count)
		tab[count++] = '\0';
	return (tab);
}
