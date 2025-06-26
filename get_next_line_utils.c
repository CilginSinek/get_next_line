/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:46:32 by iduman            #+#    #+#             */
/*   Updated: 2025/06/26 16:43:26 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s++)
		c++;
	return (c);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*orig_ptr;
	size_t	n;

	n = nmemb * size;
	ptr = (unsigned char *)malloc(n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	orig_ptr = ptr;
	while (n--)
		*ptr++ = '\0';
	return ((void *)orig_ptr);
}