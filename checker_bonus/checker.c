/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:45:08 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/13 18:09:03 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	char	*line;
	t_tab	tabs;
	int		check;

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
	line = "";
	check = 0;
	while (line != NULL)
	{
		line = get_next_line(0);
		if (!line || check < 0 || check_move(line) != 0)
			break ;
		sort_tab(line, &tabs);
		check++;
	}
	if (line && (ft_strncmp(line, "\n", 1) && issort(tabs.tab_a, tabs.len_a)))
	{
		clean(&tabs);
		ft_putstr("OK\n");
	}
	else if (line && issort(tabs.tab_a, tabs.len_a) && check_move(line) == 2)
	{
		clean(&tabs);
		ft_putstr("OK\n");
	}
	else
		panic_button(&tabs);
}
