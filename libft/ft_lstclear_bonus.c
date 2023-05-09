/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <niclaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:16:59 by niclaw            #+#    #+#             */
/*   Updated: 2023/02/18 22:48:01 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Argument:
**lst: The address of a pointer to a node.
**del: The address of the function used to delete
**	the content of the node.
Description:
    Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
*/
#include "libft_bonus.h"

/*1.check if either argument void, if yes end
**2.Loop until list is NULL (end list)
**3.Store address of next node in temp pointer
**4.Delete node with ft_lstdelone 
**	link address will be deleted, but stored in ptr
**5.Move *lst, by copying next address of temp pointer.
**6.Finally, the pointer is set to NULL.*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}
