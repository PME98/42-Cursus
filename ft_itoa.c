/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:23:37 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/24 18:49:36 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_digit(long int n)
{
	int	a;

	a = 1;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char	*ft_mkstr(long int n, int a)
{
	char	*ptr;
	int		cpy;

	cpy = n;
	ptr = malloc(a);
	if (!ptr)
		return (NULL);
	if (n >= 0)
		a--;
	else
		n *= -1;
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

char	*ft_itoa(long int n)
{
	int		a;

	a = ft_digit(n);
	return (ft_mkstr(n, a));
}

int	main(void)
{
	int	n;

	n = -2147483648;
	printf("%d \n", n);
	printf("%s \n", ft_itoa(n));
	return (0);
}
