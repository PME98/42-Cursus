/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:15:17 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/26 16:00:52 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			a;
	char		*str;

	a = 0;
	str = malloc(len);
	if (str == '\0')
		return (NULL);
	while (s[start])
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