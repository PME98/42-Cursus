/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:43:41 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/25 00:00:48 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int		a;
	int		b;
	char	**str;

	a = 0;
	b = 1;
	while (s[a])
	{
		while (s[a] == c)
		a++;
		while (s[a] != c)
		{	
			*str[b] = s[a];
			a++;
			b++;
		}
		b++;
		a = 0;

	}
	return (str);
}

int	main(void)
{
	char	*s;
	char	c;

	s = "el otro día me tomé un batido";
	c = ' ';
	ft_split(s, c);
}
