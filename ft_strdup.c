/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:57:04 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/23 17:07:44 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include<stdio.h>

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*s2;

	a = 0;
	while (s1[a])
		a++;
	s2 = malloc(a);
	a = 0;
	while (s1[a])
	{
		s2[a] = s1[a];
		a++;
	}
	return (s2);
}
/*
int	main()
{
	char	*s1;

	s1 = "hola";
	printf("%s\n", strdup(s1));
	printf("%s", ft_strdup(s1));
	return (0);
}
*/