/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:24:28 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:24:32 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*DESCRIPTION
    Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.
**PARAMETER:
**	lst: node to free
**	del: the address of funciton used to delete
*/
#include "libft_bonus.h"

/*1.apply del to the node 
**2.Free memory of node
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}
