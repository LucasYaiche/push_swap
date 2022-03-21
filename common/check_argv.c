/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:46:10 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/21 16:54:39 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-'
				&& argv[i][j] != ' ')
				return (0);
			if (argv[i][j] == '-' && argv[i][j + 1] == '-')
				return (0);
			if (ft_isdigit(argv[i][j]) && (argv[i][j + 1] == '-'))
				return (0);
		}
		if (argv[i][0] != '-')
		{
			if ((ft_strlen(argv[i]) >= 10)
				&& (ft_strncmp("2147483647", argv[i], ft_strlen(argv[i])) < 0))
				return (0);
		}
		else if (argv[i][0] == '-')
			if (ft_strlen(argv[i]) >= 11
				&& ft_strncmp("-2147483648", argv[i], 11) < 0)
				return (0);
	}
	return (1);
}
