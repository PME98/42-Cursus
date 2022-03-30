/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:15:17 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/30 14:31:52 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == '\0')
		return (NULL);
	i = 0;
	j = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	if (len == 0)
		return (str);
	return (str);
}
/*
int	main(void)
{
	char			*s;
	unsigned int	start;
	size_t			len;

	s = "hola amigos";
	start = 6;
	len = 4;
	printf("%s", ft_substr(s, start, len));
	return (0);
}
*/