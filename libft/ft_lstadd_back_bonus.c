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
#include "libft_bonus.h"

/*1.Check pointers, start with new, then lst
**2.Check if the list given is void, if yes
**	link list to new, new is the only node
**3.record the last node of the list lst in the ptr
**	with ft_lstlast
**4.point the last node link to the new last node given
**5.*check: It is assumed that new node already has ->next = NULL
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
