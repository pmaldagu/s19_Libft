/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:51:45 by pmaldagu          #+#    #+#             */
/*   Updated: 2019/10/18 12:34:55 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *nwlst;
	t_list **first;
	
	nwlst = f(lst->content);
	*first = nwlst;
	nwlst = nwlst-next;
	while (lst->next != NULL)
	{
		nwlst = f(lst->content);
		lst = lst->next;
		nwlst = nwlst->next;
	}
	nwlst = *first;
	return (nwlst);
}
