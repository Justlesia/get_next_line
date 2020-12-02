/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrenton <sbrenton@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:18:26 by sbrenton          #+#    #+#             */
/*   Updated: 2020/11/19 22:25:55 by sbrenton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GNL_GET_NEXT_LINE_H

#	define GNL_GET_NEXT_LINE_H

#	include <stdlib.h>
#	include <stdio.h>
#	include <zconf.h>

#	ifndef BUFFER_SIZE

# 	define BUFFER_SIZE 32

#	endif

int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);

#	endif
