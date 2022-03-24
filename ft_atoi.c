/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:29:51 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/24 12:27:05 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_compnum(const char *str, int a, long int num, int signo)
{
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - 48);
		if (signo != 0 && num > 2147483648)
			return (0);
		else if (num > 2147483647)
			return (-1);
		a++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int			a;
	int			signo;
	long int	num;

	a = 0;
	signo = 0;
	num = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			signo++;
		a++;
	}
	num = ft_compnum(str, a, num, signo);
	if (signo != 0 && num != 0)
		return (num * (-1));
	return (num);
}

int		main(void)
{
	char	*str;
	str = "	 -214754";
	printf("%d \n", ft_atoi(str));
	printf("%d \n", atoi(str));
	return (0);
}
