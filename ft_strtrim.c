/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:58:45 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/25 00:14:26 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

size_t			ft_strlen(char *a);

char			*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		a;

	start = 0;
	a = 0;
	end = ft_strlen((char *)s1) - 1;
	str = malloc(end + 2);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end >= start)
		end--;
	while (start <= end)
	{
		str[a] = s1[start];
		start++;
		a++;
	}
	return (str);
}

int	main(void)
{
	ft_strtrim("abqbc", "abc");
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return (0);
}
