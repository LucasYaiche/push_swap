/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:27:39 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/08 18:43:20 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	tabs;
	int		i;

	if (argc <= 1 || !check_argv(--argc, ++argv))
		input_error();
	tabs.len = argc;
	tabs.tab_a = ft_calloc(argc + 1);
	tabs.tab_b = ft_calloc(argc + 1);
	if (!tabs.tab_a || !tabs.tab_b)
		panic_button(&tabs);
	fill_tab(tabs.tab_a, argv);
	if (issort(&tabs))
		panic_button(&tabs);
	/*
	i = -1;
	while (tabs.tab_a[++i])
		printf("%i\n", tabs.tab_a[i]);
	if (check_recu(&tabs, 1000))
		printf("recu: oui\n");
	else
		printf("recu: non\n");
		*/
}
