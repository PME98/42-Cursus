/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:57:04 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 17:34:57 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*s2;

	a = 0;
	while (s1[a])
		a++;
	s2 = ft_calloc(a + 1, sizeof(char));
	if (!s2)
		return (0);
	a = 0;
	while (s1[a])
	{
		s2[a] = s1[a];
		a++;
	}
	return (s2);
}
