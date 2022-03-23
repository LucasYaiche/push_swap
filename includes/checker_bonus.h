/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:45:26 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/23 15:30:57 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../includes/push_swap.h"

char	*get_next_line(int fd);
char	*ft_calloc_char(size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strjoin(char *s1, char *s2);
int		check(char *s, char c);
char	*ft_strdup(char *s);
int		check_move(char *line);
void	sort_tab(char *line, t_tab *tab);
void	ft_free_char(char **ptr);
void	sa_checker(t_tab *tabs);
void	sb_checker(t_tab *tabs);
void	ss_checker(t_tab *tabs);
void	pa_checker(t_tab *tabs);
void	pb_checker(t_tab *tabs);
void	rra_checker(t_tab *tabs);
void	rrb_checker(t_tab *tabs);
void	rrr_checker(t_tab *tabs);
void	ra_checker(t_tab *tabs);
void	rb_checker(t_tab *tabs);
void	rr_checker(t_tab *tabs);
void	clean(t_tab *tabs);

#endif