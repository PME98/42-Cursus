/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:01:42 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/20 20:49:11 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1, 1);
	if (str == '\0')
		return (NULL);
	while (s1[b])
		str[a++] = s1[b++];
	b = 0;
	while (s2[b])
		str[a++] = s2[b++];
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	int			finish;
	char		*linetore;
	char		*myline;
	int			a;

	if (!fd)
		return (NULL);
	finish = 0;
	myline = ft_calloc(BUFFER_SIZE, 1);
	while (a <= BUFFER_SIZE)
	{
		a = a + read(fd, line, 1);
		myline[finish] = line[0];
		if (line[0] == '\n')
		{
			linetore = myline;
			free(myline);
			return (linetore);
		}
		finish++;
	}
	if (a > BUFFER_SIZE)
		myline = ft_strjoin(myline);
	return (NULL);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*s;

	fd = open("test2", O_RDONLY);
	printf("BUFFER_SIZE=%d\n", BUFFER_SIZE);
	s = get_next_line(fd);
	printf("1=%s", s);
	s = get_next_line(fd);
	printf("2=%s", s);
	s = get_next_line(fd);
	printf("3=%s", s);
	s = get_next_line(fd);
	printf("4=%s", s);
	close(fd);
}
