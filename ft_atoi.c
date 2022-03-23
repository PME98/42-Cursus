/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:29:51 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/23 21:50:29 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

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
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - 48);
		if (num > 2147483647)
		{			
			if (signo != 0)
				return (0);
			return (-1);
		}
		a++;
	}
	if (signo != 0)
		return (num * (-1));
	return (num);
}

int		main(void)
{
	char	*str;
	str = "	 -2147483321316493545654";
	printf("%d \n", ft_atoi(str));
	printf("%d \n", atoi(str));
	return (0);
}
