/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radixsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:09:54 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/16 16:11:13 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radixsort(t_tab *tabs)
{
	int	biggest;
	int	count;
	int	i;
	int	j;
	int n;

	biggest = find_biggest(tabs->tab_a, tabs->len_a);
	count = 0;
	i = -1;
	while (biggest != 1)
	{
		biggest /= 2;
		count++;
	}
	count += 1;
	j = -1;
	while (++j < count)
	{
		i = -1;
		n = tabs->len_a;
		while (++i < n)
		{
			if ((tabs->tab_a[0] >> j) & 1)
				ra(tabs);
			else
				pb(tabs);
		}
		while (tabs->len_b != 0)
			pa(tabs);
	}
}
