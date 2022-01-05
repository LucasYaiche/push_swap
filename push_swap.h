/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:23:19 by lyaiche           #+#    #+#             */
/*   Updated: 2022/01/03 16:14:56 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_tab
{
	int	*tab_a;
	int	*tab_b;
	int	len_a;
	int	len_b;
	int	*tab_index;
}				t_tab;

int		*ft_calloc(size_t len);
size_t	ft_strlen(const char *str);
void	fill_tab(t_tab *tabs, char **argv);
int		ft_atoi(char *num);
void	ft_putstr(char	*s);
void	ft_putstr_error(char *s);
void	panic_button(t_tab *tabs);
void	ft_free(int **ptr);
int		check_argv(int argc, char **argv);
int		ft_isdigit(char n);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	input_error(void);
int		find_biggest(int *tab, int len);
int		issort(int *tab, int len);
int		find_lowest(int *tab, int len);
void	sa(t_tab *tabs);
void	sb(t_tab *tabs);
void	ss(t_tab *tabs);
void	pa(t_tab *tabs);
void	pb(t_tab *tabs);
void	rra(t_tab *tabs);
void	rrb(t_tab *tabs);
void	rrr(t_tab *tabs);
void	ra(t_tab *tabs);
void	rb(t_tab *tabs);
void	rr(t_tab *tabs);
void	what_case(t_tab *tabs);
void	case_2(t_tab *tabs);
void	case_3(t_tab *tabs);
void	case_4(t_tab *tabs);
void	case_5(t_tab *tabs);
void	up(int *tab, int len);
void	down(int *tab, int len);
void	ft_radixsort(t_tab *tabs);
void	index_list(t_tab *tabs);
void	end(t_tab *tabs);

#endif