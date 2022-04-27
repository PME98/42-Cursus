/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:04:48 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/27 18:58:59 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	a;

	a = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		a += 6;
		return (a);
	}
	while (*str)
	{
		write(1, str++, 1);
		a++;
	}
	return (a);
}

int	aux_pointer(unsigned long n, char *hex)
{	
	int	i;

	i = 0;
	if (n >= 16)
		i += aux_pointer(n / 16, hex);
	i += write(1, hex + (n % 16), 1);
	return (i);
}

int	ft_pointer(unsigned long n, char *hex)
{
	int	i;

	i = 2;
	ft_putchar('0');
	ft_putchar('x');
	i += aux_pointer(n, hex);
	return (i);
}

int	ft_putnbr(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ret += write(1, "-2", 2);
			n = 147483648;
		}
		else
		{
			ret += write(1, "-", 1);
			n = -n;
		}
	}
	if (n > 9)
		ret += ft_putnbr(n / 10);
	ret += ft_putchar((n % 10) + '0');
	return (ret);
}
