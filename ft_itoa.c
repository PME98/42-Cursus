/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:12:08 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/30 17:11:06 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_digit(unsigned int n)
{
	int	a;

	a = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char	*ft_mkstr(unsigned int n, int a, int w)
{
	char			*ptr;
	int				cpy;

	cpy = w;
	if (w >= 0)
	{
		ptr = ft_calloc(a + 1, sizeof(char));
		if (!ptr)
			return (NULL);
		a--;
	}
	else
	{
		ptr = ft_calloc(a + 2, sizeof(char));
		if (!ptr)
			return (NULL);
		w *= -1;
	}
	while (a >= 0)
	{
		ptr[a] = n % 10 + 48;
		n /= 10;
		a--;
	}
	if (cpy < 0)
		ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int				a;
	unsigned int	j;

	if (n < 0)
		j = -n;
	else
		j = n;
	a = ft_digit(j);
	return (ft_mkstr(j, a, n));
}

int	main(void)
{
	printf("%s", ft_itoa(-214743648));
	return (0);
}

