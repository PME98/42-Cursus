/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:36:40 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/30 12:57:51 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(char *a);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) - 1);
	if (str == '\0')
		return (NULL);
	while (s1[b])
		str[a++] = s1[b++];
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
