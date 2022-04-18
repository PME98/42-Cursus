/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:09:20 by pedmurie          #+#    #+#             */
/*   Updated: 2022/04/18 19:58:34 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"

#include<stdlib.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int	ft_strchr(const char *s, int c)
{
	int		a;
	char	*str;

	a = 0;
	str = (char *)s;
	while (str[a])
	{
		if (str[a] == (char)c)
			return (a);
		a++;
	}
	return ('\0');
}

size_t	ft_strlen(const char *a)
{
	size_t	cont;

	cont = 0;
	while (a[cont])
		cont++;
	return (cont);
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

char	*get_next_line(int fd)
{
	char	*line;
	int		length;
	int		finish;
	char	*myline;
	int		b;

	b = 0;
	if (!fd)
		return (NULL);
	length = read(fd, line, BUFFER_SIZE);
	finish = ft_strchr(line, '\n');
	return (ft_substr(line, b, finish + 1));
}

int	main(int argc, char **argv)
{
	int		fd2;

	fd2 = open("test2", O_RDONLY);
	printf("BUFFER_SIZE=%d\n", BUFFER_SIZE);
	printf("%s", get_next_line(fd2));
/*	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd2));*/
//	get_next_line(fd2);
	close(fd2);
}
