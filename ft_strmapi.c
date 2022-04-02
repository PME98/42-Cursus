/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:50:37 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/02 12:59:48 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		a;

	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	a = 0;
	while (s[a])
	{
		str[a] = f(a, s[a]);
		a++;
	}
	return (str);
}
/*
char	my_func(unsigned int i, char s)
{
	printf("mi función: a = %d = %c\n", i, s);
	return (s - 32);
}

int	main(void)
{
	char	*s;
	char 	*end;

	s = "hello.";
	end = ft_strmapi(s, my_func);
	printf("Va a ser %s\n", s);
	printf("Ehto eh = %s\n", end);
	return 0;
}
*/