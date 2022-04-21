/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:20:27 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/21 18:04:17 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

#include "get_next_line.h"

char	*ft_next(char *file)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	while (file[a] && file[a] != '\n')
		a++;
	if (!file[a])
	{
		free(file);
		return (NULL);
	}
	str = malloc(ft_strlen(file) - ++a);
	if (!str)
		return (NULL);
	b = 0;
	while (file[a])
		str[b++] = file[a++];
	str[b] = '\0';
	free(file);
	return (str);
}

char	*ft_makeline(char *file)
{
	int		a;
	char	*str;

	a = 0;
	if (!file)
		return (NULL);
	while (file[a] && file[a] != '\n')
		a++;
	str = malloc(a + 2);
	if (!str)
		return (NULL);
	a = 0;
	while (file[a] && file[a] != '\n')
	{
		str[a] = file[a];
		a++;
	}
	if (file[a] == '\n')
	{
		str[a] = file[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}

char	*ft_readfile(int fd, char *file)
{
	char	*mem;
	int		a;

	mem = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	a = 1;
	while (!ft_strchr(file, '\n') && a != 0)
	{
		a = read(fd, mem, BUFFER_SIZE);
		if (a == -1)
		{
			free(mem);
			return (NULL);
		}
		mem[a] = '\0';
		file = ft_strjoin(file, mem);
	}
	free(mem);
	return (file);
}

char	*get_next_line(int fd)
{
	static char		*file;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	file = ft_readfile(fd, file);
	if (!file)
		return (NULL);
	line = ft_makeline(file);
	file = ft_next(file);
	return (line);
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
