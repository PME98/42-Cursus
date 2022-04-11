/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:44:07 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/11 13:49:45 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == '\0')
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	j = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	if (len == 0)
		return (str);
	return (str);
}

size_t	ft_strlen(const char *a)
{
	size_t	cont;

	cont = 0;
	while (a[cont])
		cont++;
	return (cont);
}

void	*ft_calloc(size_t count, size_t size)
{
	int		a;
	char	*ptr;

	a = count * size;
	if (size >= SIZE_MAX || count >= SIZE_MAX)
		return (NULL);
	ptr = malloc(a);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', a);
	return (ptr);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*str;

	str = (char *)b;
	a = 0;
	while (a < len)
	{	
		str[a] = (char)c;
		a++;
	}
	return (b);
}
