/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:07:42 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/07 19:33:33 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_check_c(char const *s, char c)
{
	int	find;

	if (!s)
		return ('\0');
	find = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		if (*(s - 1) != c)
			find++;
	}
	return (find);
}

char	**ft_make(int numptrs, char **end, char const *s, char c)
{
	int	pos;
	int	inicio;
	int	t;

	t = 0;
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
			end[t++] = ft_substr(s, inicio, pos - inicio);
			if (!end[t - 1])
			{
				while (t >= 0)
					free (end[t--]);
			}
		}
	}
	return (end);
}

char	**ft_split(char const *s, char c)
{
	char	**end;
	int		numptrs;

	numptrs = ft_check_c(s, c);
	end = ft_calloc(numptrs + 1, sizeof(char *));
	if (!end)
		return (NULL);
	end = ft_make(numptrs, end, s, c);
	return (end);
}
/*
int	main(void)
{
	char	*s;
	char	c;
	char	**a;
	int		b;

	s = " luis   se  toma  un batido";
	c = ' ';
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