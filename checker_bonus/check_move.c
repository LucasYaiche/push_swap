/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:51:12 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/15 22:20:55 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_move_2(char *line)
{
	if (ft_strncmp(line, "rb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		return (0);
	else
		return (2);
}

int	check_move(char *line)
{
	if (ft_strncmp(line, "\n", 1))
	{
		if (ft_strncmp(line, "sa\n", 3) == 0)
			return (0);
		else if (ft_strncmp(line, "sb\n", 3) == 0)
			return (0);
		else if (ft_strncmp(line, "ss\n", 3) == 0)
			return (0);
		else if (ft_strncmp(line, "pa\n", 3) == 0)
			return (0);
		else if (ft_strncmp(line, "pb\n", 3) == 0)
			return (0);
		else if (ft_strncmp(line, "ra\n", 3) == 0)
			return (0);
		return (check_move_2(line));
	}
	return (1);
}
