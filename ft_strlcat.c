/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:32:03 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/02 17:47:59 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	a;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	a = 0;
	if (size == 0)
		return (lens);
	if (lend > size)
		return (lens + size);
	else
	{
		while (src[a] && (lend + a) < size)
		{
			dst[lend + a] = src[a];
			a++;
		}
		if ((lend + a) == size && lend < size)
			dst[lend + a - 1] = '\0';
		else
			dst[lend + a] = '\0';
		return (lend + lens);
	}
}
/*
int main(void)
{
    char    dst[] = "En un lugar de la mancha";
    char    dst1[] = "En un lugar de la mancha";
    char    src[] = "Hola que tal";
    char    src1[] = "Hola que tal";
    size_t  size;
    size = 2;
    printf("STRLCAT = %ld\n", strlcat(dst, src, size));
    printf("MI STRLCAT = %u\n", ft_strlcat(dst1, src1, size));
}*/