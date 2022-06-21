/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:23:43 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 16:44:30 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	char	*str;

	a = 0;
	str = (char *)s;
	while (a < n)
	{
		if (str[a] == (char)c)
		{
			return (&str[a]);
		}
		a++;
	}
	return (NULL);
}
