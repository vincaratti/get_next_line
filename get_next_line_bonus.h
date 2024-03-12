/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:36:07 by vcaratti          #+#    #+#             */
/*   Updated: 2024/03/05 11:30:19 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 200
# endif

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int		has_endl(char *str, int is_not_buffer);
char	*get_first_line(char *buffer);
int		ft_arrlen(char *arr);
int		ft_strlen(char *str);
void	buffer_shift(char *buffer, int shift);
char	*array_to_mem(char *mem, char *buffer);
char	*empty_mem_rem(char **mem, char *rem, int error);
char	*mem_to_array_ret_firstl(char *mem, char *buffer);
void	wipe_buffer(char *buffer);
char	*get_next_line(int fd);

#endif
