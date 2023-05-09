/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:16:18 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:16:35 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARAMETER:
**	lst:The address of a pointer to the first link of
	a list.
	new: The address of a pointer to the node to be
	added to the list.
**SYNOPSIS:
    Adds the node ’new’ at the end of the list.
*/
#include "libft.h"

/*1.record the last node of the list lst in the ptr 
**2.point the last node link to the new last node link
**3.point the new last node link to NULL
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
		}
		else
		{
			ptr = ft_lstlast(*lst);
			ptr->next = new;
		}
	}
}
