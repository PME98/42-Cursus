/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:43:41 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/24 22:06:51 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int		a;
	int		b;
	char	**str;

	a = 0;
	b = 0;
	while (s[a])
	{
		if (s[a] == c)
		{	
			str[b] = s[a];
			b++;
		}	
		a++;
	}
}

int	main(void)
{
	
}