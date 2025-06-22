/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:46:28 by iduman            #+#    #+#             */
/*   Updated: 2025/06/22 15:48:12 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*updater(char *c, char x)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(c);
	tmp = (char *)malloc(ft_strlen(c) + 2);
	ft_strlcpy(tmp, c, len + 1);
	tmp[len] = x;
	tmp[len + 1] = '\0';
	free(c);
	return (tmp);
}

char	*get_next_line(int fd)
{
	char	*tmp;
	char	tmp2[1];

	tmp = (char *)malloc(BUFFER_SIZE);
	tmp[0] = '\0';
	if (!tmp)
		return (NULL);
	while (1)
	{
		read(fd, tmp2, 1);
		if (*tmp2 == '\n')
			break ;
		tmp = updater(tmp, *tmp2);
	}
	return (tmp);
}
