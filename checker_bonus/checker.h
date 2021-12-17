/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:45:26 by lyaiche           #+#    #+#             */
/*   Updated: 2021/12/17 15:16:02 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_tab
{
	int	*tab_a;
	int	*tab_b;
	int	len_a;
	int	len_b;
}				t_tab;

char	*get_next_line(int fd);
char	*ft_calloc_char(size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		check(char *s, char c);
char	*ft_strdup(char *s);

#endif