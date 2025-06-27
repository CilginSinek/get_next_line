/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:46:32 by iduman            #+#    #+#             */
/*   Updated: 2025/06/27 16:31:41 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s++)
		c++;
	return (c);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*nstr;
	size_t	s1_len;
	size_t	i;
	char	*s1_holder;

	s1_len = 0;
	if (s1 != NULL)
		s1_len = ft_strlen(s1);
	nstr = (char *)malloc(s1_len + ft_strlen(s2) + 1);
	if (!nstr)
		return ((char *) NULL);
	i = 0;
	s1_holder = s1;
	while (s1_len && *s1)
	{
		nstr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
		nstr[i++] = *s2++;
	nstr[i] = '\0';
	if (s1_holder != NULL)
		free(s1_holder);
	return (nstr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*orig_ptr;
	size_t			n;

	n = nmemb * size;
	ptr = (unsigned char *)malloc(n);
	if (ptr == NULL)
		return (NULL);
	orig_ptr = ptr;
	while (n--)
		*ptr++ = '\0';
	return ((void *)orig_ptr);
}

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (1)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	new_len = ft_strlen(s) - start;
	if (new_len > len)
		new_len = len;
	str = (char *)malloc(sizeof(char) * (new_len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, new_len + 1);
	return (str);
}
