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

	if (!fd)
		return (NULL);
	line = ft_readline(line);
	if (!line)
		return (NULL);
}
