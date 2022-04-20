/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:01:42 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/20 20:36:59 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

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
