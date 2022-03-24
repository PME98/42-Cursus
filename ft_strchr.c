/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:21:27 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/24 21:08:40 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	return (NULL);
}

/*
int main()
{
   char *s = "Hola amigos";
   char c = 'a';

   printf( "s=%s\n", s);
   printf( "c=%c\n", c);
   printf( "%s\n", strchr(s, c) );
   printf( "%s", ft_strchr(s, c) );

   return 0;
}
*/