/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:52:52 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/22 21:06:35 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	{
		if (n == 0)
			return (0);
		while (i < (n - 1) && (char *)s1[i] && (char *)s2[i] && s1[i] == s2[i])
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}
