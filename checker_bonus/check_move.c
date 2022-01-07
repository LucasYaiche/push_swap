/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:51:12 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/06 14:00:41 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_move(char *line)
{
	if (ft_strncmp(line, "sa", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "sb", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ss", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pa", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pb", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ra", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rb", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rr", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rra", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrb", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rre", 4) == 0)
		return (0);
	else
		return (1);
}
