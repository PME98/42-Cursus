/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:20:27 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/26 17:22:06 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

	mem = malloc(BUFFER_SIZE + 1);
	if (!mem)
		return (NULL);
	a = 1;
	while (a != 0)
	{
		a = read(fd, mem, BUFFER_SIZE);
		if (a == -1)
		{
			free(mem);
			return (NULL);
		}
		mem[a] = '\0';
		file = ft_strjoin(file, mem);
		if (ft_strchr(file, '\n'))
			break ;
	}
	free(mem);
	return (file);
}

char	*get_next_line(int fd)
{
	static char		*file[1024];
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	file[fd] = ft_readfile(fd, file[fd]);
	if (!file[fd])
		return (NULL);
	line = ft_makeline(file[fd]);
	file[fd] = ft_next(file[fd]);
	if (ft_strlen(line) == 0)
	{	
		free(line);
		return (NULL);
	}
	return (line);
}
/*
int	main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	*s;

	fd = open("test1", O_RDONLY);
	fd2 = open("test2", O_RDONLY);
	printf("BUFFER_SIZE=%d\n", BUFFER_SIZE);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	s = get_next_line(fd);
	printf("%s", s);
	s = get_next_line(fd2);
	printf("%s", s);
	close(fd);
}
*/
