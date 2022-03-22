/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:23:43 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/22 19:52:29 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	char	*str;

	a = 0;
	str = (char *)s;
	while (str[a] && a < n)
	{
		if (str[a] == (char)c)
		{
			return (&str[a]);
		}
		a++;
	}
	return (NULL);
}
/*
int		main()
{
	char	*s;
	int		c;
	size_t	n;
	
	c = 'a';
	s = "holiwis amiwis";
	n = 2;
	printf("%s\n", memchr(s, c, n));
	printf("%s", ft_memchr(s, c, n));
	return (0);
}*/