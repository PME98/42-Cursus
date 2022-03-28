/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:11:11 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 22:09:34 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
			while (needle[b] && needle[b] == h[c] && a < len)
			{
				c++;
				b++;
			}
			if (needle[b - 1] == h[a])
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

	h = "MZIRIaMZIRIBMZE123";
	needle = "MZIRIBMZE123";
	len = strlen(needle);
	printf("%s\n", strnstr(h, needle, len));
	printf("%s", ft_strnstr(h, needle, len));
	return (0);
}
*/