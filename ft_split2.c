/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:13:26 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/07 19:14:31 by pedmurie@st      ###   ########.fr       */
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
	if (!end)
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
			end[t++] = ft_substr(s, inicio, pos - inicio);
		}
	}
	return (end);
}

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
