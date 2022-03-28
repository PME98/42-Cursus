/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:44:30 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 21:30:27 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size);

int	ft_check_c(char const *s, char c)
{
	int		find;

	find = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		if (*s - 1 != c)
			find++;
	}
	return (find);
}

char	*ft_mkstr2(const char *s, char c, int inicio)
{
	char	*str;
	int		a;

	a = 0;
	while (s[inicio + a] != c)
		a++;
	str = ft_calloc(a, sizeof(char));
	if (str == '\0')
		return (NULL);
	a = 0;
	while (s[inicio] != c && s[inicio])
	{
		str[a] = s[inicio];
		inicio++;
		a++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**end;
	int		t;
	int		numptrs;
	int		pos;
	int		inicio;

	t = 0;
	numptrs = ft_check_c(s, c);
	end = ft_calloc(numptrs + 1, sizeof(char *));
	if (end == '\0')
		return (NULL);
	pos = 0;
	while (t < numptrs)
	{
		if (s[pos])
		{
			while (s[pos] == c && s[pos])
				pos++;
			inicio = pos;
			while (s[pos] != c && s[pos])
				pos++;
			end[t++] = ft_mkstr2(s, c, inicio);
		}
	}
	return (end);
}/*
	int main ()
{
	char	*s;
	char	c;
	char	**a;
	int		b;
	s = " luis   se  toma  un batido";
	c = '\0';
	a = ft_split(s, c);
	b = 0;
	while (a[b])
	{
		printf("%s\n", a[b]);
		b++;
	}
	return (0);
}
*/