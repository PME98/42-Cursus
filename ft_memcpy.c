/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:59:13 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/21 16:41:51 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		a;
	char		*d;
	char		*o;

	a = 0;
	d = (char *)dst;
	o = (char *)src;
	while (a < n)
	{
		d[a] = o[a];
		a++;
	}
	return (dst);
}
