/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:09:20 by pedmurie          #+#    #+#             */
/*   Updated: 2022/04/11 15:35:56 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_readline(char *line)
{
	int		a;
	char	*line;

	a = 1;
	while (!line[a] && line[a] != '\n')
		a++;
	line = ft_substr(line, 0, a);
	return (line);

}

char	*get_next_line(int fd)
{
	static char	*line;
	int		lsize;
	char		*leido;
	int		inicio;
	
	if (!fd)
		return (NULL);
	
	line = malloc(BUFFER_SIZE);
	inicio = 0;
	leido = malloc(1);
	
	while (leido != "\n" || inicio != BUFFER_SIZE) 
	{
		if (!line || lsize <= 0)
			return (NULL);
	
		lsize = read(fd, leido, 1);
		line[inicio] = leido;
		inicio ++;
	}
	return line;
}

