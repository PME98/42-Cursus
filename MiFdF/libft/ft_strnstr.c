/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:11:11 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/09 14:24:21 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (j < len && haystack[j])
	{
		i = 0;
		while (needle[i] && haystack[j + i]
			&& needle[i] == haystack[j + i] && j + i < len)
			i++;
		if (needle[i] == '\0')
			return ((char *)&haystack[j]);
		j++;
	}
	return (0);
}
/*
int	main(void)
{
	char		*h;
	char		*needle;
	size_t		len;

	h = "aaabcabcd";
	needle = "aabc";
	len = 35;
	printf("%s\n", strnstr(h, needle, len));
	printf("%s", ft_strnstr(h, needle, len));
	return (0);
}
*/