/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrenton <sbrenton@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:28:35 by sbrenton          #+#    #+#             */
/*   Updated: 2020/11/19 22:40:07 by sbrenton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t			ft_strlen(const char *s)
{
	size_t		l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}

char			*ft_strdup(const char *s)
{
	size_t		l;
	size_t		n;
	char		*res;

	l = ft_strlen(s);
	if (!(res = (char *)malloc(l + 1)))
		return (NULL);
	n = 0;
	while (n < l)
	{
		res[n] = s[n];
		n++;
	}
	res[n] = '\0';
	return (res);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		n;
	size_t		s1_len;
	size_t		s2_len;
	char		*res;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(res = (char *)malloc(s1_len + s2_len + 1)))
		return (NULL);
	n = 0;
	while (n < s1_len)
	{
		res[n] = s1[n];
		n++;
	}
	n = 0;
	while (n < s2_len)
	{
		res[n + s1_len] = s2[n];
		n++;
	}
	res[n + s1_len] = '\0';
	return (res);
}
