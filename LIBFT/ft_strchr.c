/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:21:27 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 16:48:34 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*str;

	a = 0;
	str = (char *)s;
	while (str[a])
	{
		if (str[a] == (char)c)
		{
			return (&str[a]);
		}
		a++;
	}
	if (c == '\0')
		return (&str[a]);
	return (NULL);
}
