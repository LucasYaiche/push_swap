/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:23:19 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/01 16:36:33 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		*ft_calloc(size_t len);
size_t	ft_strlen(const char *str);
int		**create_tab(int len, char **argv);
int		**fill_tab(int **tab, char **argv);
int		ft_atoi(const char *num);
void	ft_putstr(char	*s);
void	panic_button(void);

#endif