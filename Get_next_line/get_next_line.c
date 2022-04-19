/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:09:20 by pedmurie          #+#    #+#             */
/*   Updated: 2022/04/19 19:10:01 by pedmurie@st      ###   ########.fr       */
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
			return (a + 1);
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
	char		*line;
	int			length;
	static int	finish;
	char		*myline;
	static int	start;

	start = finish + start;
//	printf("s=%d	", start);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	length = read(fd, line, BUFFER_SIZE);
//	if (length >= BUFFER_SIZE)
//		pread(fd, line, BUFFER_SIZE, finish);*/
	finish = ft_strchr(&line[start], '\n');
//	printf ("f=%d	", finish);
	myline = ft_substr(line, start, finish);
	return (myline);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*s;

	fd = open("test2", O_RDONLY);
//	printf("BUFFER_SIZE=%d\n", BUFFER_SIZE);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	close(fd);
}
