/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:23:19 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/09 19:16:56 by lyaiche          ###   ########.fr       */
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
	int	len;
}				t_tab;

int		*ft_calloc(size_t len);
size_t	ft_strlen(const char *str);
int		*fill_tab(int *tab, char **argv);
int		ft_atoi(char *num);
void	ft_putstr(char	*s);
void	panic_button(t_tab *tabs);
void	ft_free(int **ptr);
int		check_argv(int argc, char **argv);
int		ft_isdigit(char n);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	input_error(void);
int		check_recu(t_tab *tabs, int place);
int		find_biggest(int *tab);
int		find_place(int	*tab);
int		issort(t_tab *tabs);
int		find_lowest(int *tab);
void	down(int *tab);
void	sa(t_tab *tabs);
void	pa(t_tab *tabs);
void	pb(t_tab *tabs);
void	rra(t_tab *tabs);
void	ra(t_tab *tabs);
void	what_case(t_tab *tabs);
void	case_2(t_tab *tabs);
void	case_3(t_tab *tabs);
void	case_4(t_tab *tabs);
void	case_5(t_tab *tabs);
void	up(int *tab);
void	down(int *tab);

#endif