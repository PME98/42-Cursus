/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:15:17 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 21:39:50 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			a;
	char		*str;

	a = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (str == '\0')
		return (NULL);
	while (s[start] && a < (int)len)
	{
		str[a] = s[start];
		start++;
		a++;
	}
		str[a] = '\0';
	return (str);
}
/*
int		main()
{
	char			*s;
	unsigned int	start;
	size_t			len;

	s = "hola amigos";
	start = 3;
	len = 9;
	printf("%s", ft_substr(s, start, len));
	return (0);
}*/