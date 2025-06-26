/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:46:28 by iduman            #+#    #+#             */
/*   Updated: 2025/06/26 20:09:09 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
char	*get_next_line(int fd)
{
	char	*tmp;
	char	tmp2[1];

	tmp = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!tmp || fd == -1)
		return (NULL);
	tmp2[0] = 1;
	while (*tmp2 != 0)
	{
		read(fd, tmp2, 1);
		if (*tmp2 == '\n')
			break ;
		if(BUFFER_SIZE == ft_strlen(tmp))
		{
			tmp[ft_strlen(BUFFER_SIZE + 1)] = 0;
			break;
		}

		tmp[ft_strlen(tmp)] = *tmp2;
	}
	return (tmp);
}
