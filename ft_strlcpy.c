/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:24:20 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/22 13:29:36 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	result;

	result = 0;
	a = 0;
	while (src[a] != '\0' && a < (size - 1))
	{
		dest[a] = src[a];
		a++;
	}
	while (src[result] != '\0')
	{
		result++;
	}
	if (size)
		dest[a] = '\0';
	return (result);
}
