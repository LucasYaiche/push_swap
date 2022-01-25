/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:27:39 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/24 16:28:19 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	tabs;

	if (argc <= 1 || !check_argv(--argc, ++argv))
		input_error();
	tabs.len_a = argc;
	tabs.len_b = 0;
	tabs.tab_a = ft_calloc(argc + 1);
	tabs.tab_b = ft_calloc(argc + 1);
	if (!tabs.tab_a || !tabs.tab_b)
		panic_button(&tabs);
	fill_tab(&tabs, argv);
	if (issort(tabs.tab_a, tabs.len_a))
		end(&tabs);
	what_case(&tabs);
}
