/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:11:11 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/22 21:14:41 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <xlocale.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		a;
	int			b;
	int			c;

	a = 0;
	b = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[a] && a < len)
	{
		b = 0;
		if (haystack[a] == needle[b])
		{
			c = a;
			while (needle[b] && needle[b] == haystack[c])
			{
				c++;
				b++;
			}
			if (needle[b] == '\0')
				return (&haystack[a]);
		}
		a++;
	}
	return (0);
}
