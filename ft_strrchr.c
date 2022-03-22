/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:56:21 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/22 16:58:46 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*str;

	a = 0;
	str = (char *)s;
	while (str[a])
		a++;
	while (a >= 0)
	{
		if (str[a] == (char)c)
		{
			return (&str[a]);
		}
		a--;
	}
	return (NULL);
}


int main()
{
   char *s = "Hola amigos";
   char c = 'a';

   printf( "s=%s\n", s);
   printf( "c=%c\n", c);
   printf( "%s\n", strrchr(s, c) );
   printf( "%s", ft_strrchr(s, c) );

   return 0;
}
