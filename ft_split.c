/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:51:58 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/26 15:02:22 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *a);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	**ft_split(char const *s, char c)
{
	int		conts;
	int		contstr;
	int		contcalloc;
	int		a;
	char	*str;
	char	**end;

	conts = 0;
	contstr = 0;
	a = 0;
	while ((char)s[conts])
	{
		while (s[conts] == c)
			conts++;
		contcalloc = 1;
		while (s[conts] != c)
		{
			conts++;
			contcalloc++;
		}
		str = ft_calloc(contcalloc, sizeof(char));
//		end[a] = str;
		printf("conts = %d \n", conts);
		printf("contcalloc = %d \n", contcalloc);
		printf("contstr = %d \n\n", contstr);

		contstr = 0;
		while (contstr < contcalloc)
		{
			str[contstr] = s[contstr];
			contstr++;
		}
//		printf("%s\n", str);
//		a++;
	}
	printf("%s", str);
	return (end);
}

int	main(void)
{
	char	*s;
	char	c;

	s = "ayer me tomo un batido";
	c = ' ';
	ft_split(s, c);
}