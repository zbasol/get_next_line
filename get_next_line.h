/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:28:15 by zbasol            #+#    #+#             */
/*   Updated: 2023/08/10 13:33:37 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif

int		find_newline_index(char *buff);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*get_remain_str(char *str, int nl_index, int i);
char	*get_fline(char *str);
char	*gnl_helper(char **str);
char	*merge(char *str, char *buffer, int i, int j);

#endif