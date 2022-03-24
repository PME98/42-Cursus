/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:32:03 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/24 13:33:38 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && b < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (a);
}

int main(void)
{
    char    dst[] = "En un lugar de la mancha";
    char    dst1[] = "En un lugar de la mancha";
    char    src[] = "Hola que tal";
    char    src1[] = "Hola que tal";
    size_t  size;
    size = 2;
    printf("Cadena F original: %s\n", dst);
    printf("Cadena MF original: %s\n", dst1);
    printf("Funcion original: %ld\n", strlcat(dst, src, size));
    printf("Mi   funcion: %u\n", ft_strlcat(dst1, src1, size));
    printf("Funcion original: %s\n", dst);
    printf("Mi   funcion: %s\n", dst1);
}