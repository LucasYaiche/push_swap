/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:41:55 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/23 17:13:56 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	down(int *tab, int len)
{
	int	temp;

	len--;
	while (len >= 0)
	{
		temp = tab[len];
		tab[len] = tab[len + 1];
		tab[len-- + 1] = temp;
	}
}
