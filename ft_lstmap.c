/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:14:30 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/07 18:37:16 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*lstaux;
	void	*lstcontent;

	if (!f || !lst)
		return (NULL);
	lstaux = NULL;
	while (lst != NULL)
	{
		lstcontent = (*f)(lst->content);
		if (lstcontent)
		{
			newnode = ft_lstnew(lstcontent);
			if (!newnode)
			{
				del(lstcontent);
				ft_lstclear(&lstaux, del);
				return (NULL);
			}
			ft_lstadd_back(&lstaux, newnode);
			lst = lst->next;
		}
	}
	return (lstaux);
}
