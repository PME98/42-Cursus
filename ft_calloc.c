/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:56:07 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/22 22:13:16 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

void	*calloc(size_t count, size_t size)
{
	int		a;
	char	*ptr;

	a = count * size;
	if (a == 0)
		return (0);
	ptr = malloc(a);
	memset(ptr, '\0', a);
	return (ptr);
}
