/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:11:11 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/23 18:01:40 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<xlocale.h>

char	*ft_strnstr(const char *h, const char *needle, size_t len)
{
	size_t		a;
	int			b;
	int			c;

	a = 0;
	b = 0;
	if (needle[0] == '\0')
		return ((char *)h);
	while (h[a] && a < len)
	{
		b = 0;
		if (h[a] == needle[b])
		{
			c = a;
			while (needle[b] && needle[b] == h[c])
			{
				c++;
				b++;
			}
			if (needle[b] == '\0')
				return ((char *)&h[a]);
		}
		a++;
	}
	return (0);
}
/*
int	main()
{
	char		*h;
	char		*needle;
	size_t		len;

	len = 15;
	h = "el otro día me fui a caminar";
	needle = "dia";
	printf("%s", ft_strnstr(h, needle, len));
	return (0);
}
*/