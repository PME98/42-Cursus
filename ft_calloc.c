/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:56:07 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/30 14:01:02 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		a;
	char	*ptr;

	a = count * size;
	ptr = malloc(a);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', a);
	return (ptr);
}
