/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:41:12 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/23 21:03:32 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, '\0', n);
}

int	main()
{
	char 	*s;
	size_t	n;

	s = "holiwi amiwi";
	n = 4;
	bzero(s, n);
	ft_bzero(s, n);
	printf("%d", (int)s[7]);
	return (0);
}