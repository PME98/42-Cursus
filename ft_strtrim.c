/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:58:45 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/25 01:05:22 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

size_t			ft_strlen(char *a);
char			*ft_strchr(const char *s, int c);
void			*ft_calloc(size_t count, size_t size);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		a;

	start = 0;
	a = 0;
	end = ft_strlen((char *)s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end >= start)
		end--;
	str = ft_calloc(end - start + 2, 1);
	if (!str)
		return (NULL);
	while (start <= end)
		str[a++] = s1[start++];
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return (0);
}
*/