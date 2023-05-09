/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:16:45 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:16:48 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parameter:
**lst: The address of a pointer to the first link of
**a list.
**new: address of a pointer to the node to be added
**Description:
    Adds the node ’new’ at the beginning of the list.
*/
#include "libft_bonus.h"

/*1.Check pointers, start with new, then lst
**2.If lst is void, then point *lst (as the pointer to the first link)
	to new then end.(*check: It is assumed that
	 new node already has ->next = NULL)
**3.Otherwise, Point *new linker to pointer to the first link of list 
**3.Point *lst (pointer to the first link of the list) to new, 
**as it is now the first node
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!lst)
		{
			*lst = new;
			return ;
		}
		new->next = *lst;
		*lst = new;
	}
}
