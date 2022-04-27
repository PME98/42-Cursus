/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:40:02 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/27 17:27:24 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n > 9)
		ret += ft_unsigned_putnbr(n / 10);
	ret += ft_putchar((n % 10) + '0');
	return (ret);
}

int	ft_hexa(unsigned int n, char *hex)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_hexa(n / 16, hex);
	len += write(1, (hex + (n % 16)), 1);
	return (len);
}
