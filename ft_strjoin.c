/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:36:40 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/23 19:06:20 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

size_t	ft_strlen(char *a);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) - 1);
	while (s1[b])
	{
		str[a] = s1[b];
		b++;
		a++;
	}
	b = 0;
	while (s2[b])
	{
		str[a] = s2[b];
		b++;
		a++;
	}
	str[a] = '\0';
	return (str);
}

int		main()
{
	char	*s1;
	char	*s2;

	s1 = "hola";
	s2 = " a todos";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
