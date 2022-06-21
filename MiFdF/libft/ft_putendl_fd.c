/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:42:55 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/02 13:46:34 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	if (!s || !fd)
		return ;
	a = 0;
	while (s[a])
		write(fd, &s[a++], 1);
	write (fd, "\n", 1);
}
