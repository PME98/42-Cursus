/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:09:20 by pedmurie          #+#    #+#             */
/*   Updated: 2022/04/12 20:22:02 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"

#include<stdlib.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*str;

	a = 0;
	str = (char *)s;
	while (str[a])
	{
		if (str[a] == (char)c)
		{
			return (&str[a]);
		}
		a++;
	}
	if (c == '\0')
		return (&str[a]);
	return (NULL);
}

size_t	ft_strlen(char *a)
{
	size_t	cont;

	cont = 0;
	while (a[cont])
		cont++;
	return (cont);
}

char	*get_next_line(int fd)
{
	char	*line;
	int		length;
	char	*finish;
	char	*myline;

	if (!fd)
		return (NULL);
	length = read(fd, line, BUFFER_SIZE);
	finish = ft_strchr(line, '\n');
	while ()
	{
	}
}

int	main(int argc, char **argv)
{
	int		fd2;

	fd2 = open("test2", O_RDONLY);
	printf("BUFFER_SIZE=%d\n", BUFFER_SIZE);
	get_next_line(fd2);
	close(fd2);
}
