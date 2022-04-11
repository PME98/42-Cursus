/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:07:05 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/02 18:29:42 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	a;

	if (!lst)
		return ('\0');
	a = 1;
	while (lst->next != NULL)
	{
		a++;
		lst = lst->next;
	}
	return (a);
}
