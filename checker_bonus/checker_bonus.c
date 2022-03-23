/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:45:08 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/23 14:43:16 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	verif(t_tab *tab)
{
	int	i;

	i = -1;
	while (++i < tab->len_a)
		printf("%i\n", tab->tab_a[i]);
}

void	main_2(t_tab *tabs, char *line)
{
	if (check_move(line) == 2 || (!(issort(tabs->tab_a, tabs->len_a))
			&& check_move(line) == 1))
	{
		ft_free_char(&line);
		clean(tabs);
		ft_putstr("KO\n");
	}
	else if (issort(tabs->tab_a, tabs->len_a))
	{
		ft_free_char(&line);
		clean(tabs);
		ft_putstr("OK\n");
	}
	else
	{
		ft_free_char(&line);
		panic_button(tabs);
	}
}

void	initiate_value(t_tab *tabs, int argc)
{
	tabs->len_a = argc;
	tabs->len_b = 0;
	tabs->tab_a = ft_calloc(argc + 1);
	tabs->tab_b = ft_calloc(argc + 1);
}

int	main(int argc, char **argv)
{
	char	*line;
	t_tab	tabs;

	if (argc <= 1)
		input_error();
	if (!check_argv(--argc, ++argv))
		exit(1);
	initiate_value(&tabs, argc);
	if (!tabs.tab_a || !tabs.tab_b)
		panic_button(&tabs);
	fill_tab(&tabs, argv);
	if (isdouble(tabs.tab_a, tabs.len_a))
		panic_button(&tabs);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(0);
		if (!line || check_move(line) != 0)
			break ;
		sort_tab(line, &tabs);
		ft_free_char(&line);
		line = "";
	}
	main_2(&tabs, line);
}
