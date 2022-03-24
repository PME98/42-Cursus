/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:58:45 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/24 16:42:04 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

size_t			ft_strlen(char *a);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		b;
	int		a;
	char	*str;
	int		c;

	a = 0;
	c = 0;
	str = malloc(ft_strlen((char *)s1));
	if (str == '\0')
		return (NULL);
	while (s1[a])
	{
		b = 0;
		while (set[b])
		{
			while (s1[a] != set[b])
				b++;
			if (s1[a] == set[b])
			{
				a++;
				str[c] = s1[a];
				c++;
			}			
		}
	}
	return (str);
}

int	main(void)
{
	char	*s1;
	char	*set;
	char	*str;

	s1 = "ewvbadasa";
	set = "aw";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}