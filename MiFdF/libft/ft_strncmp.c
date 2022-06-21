/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:17:16 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 16:56:32 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int 	main () 
{
   char str1[15];
   char str2[15];
   int ret;
   int	mio;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strncmp(str1, str2, 4);
	mio = ft_strncmp(str1, str2, 4);
	if (ret < 0)
   		printf("str1 is less than str2");
	else if (ret > 0)
		printf("str2 is less than str1");
	else
		printf("str1 is equal to str2");

	if (ret < 0)
   		printf("str1 is less than str2");
	else if (ret > 0)
		printf("str2 is less than str1");
	else
		printf("str1 is equal to str2");
	return(0);
}
*/