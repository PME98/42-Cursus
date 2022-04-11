/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:32:44 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/11 17:20:24 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_type(char type, va_list *args)
{
	if (type == 'c')
		return (ft_putchar(args));
	if (type == 's')
		return (ft_putstr());
	if (type == 'p')
		return ();
	if (type == 'd')
		return ();
	if (type == 'i')
		return ();
	if (type == 'u')
		return ();
	if (type == 'x')
		return ();
	if (type == 'X')
		return ();
	if (type == '%')
		return ();
}

int	ft_printf(char const *str, ...)
{
	int			a;
	va_list		args;

	va_start(args, str);
	a = 0;
	while (*str)
	{
		if (str == '%')
			ft_type(str + 1, args);
		write(1, str, 1);
		a++;
		str++;
	}
	va_end(args)
}