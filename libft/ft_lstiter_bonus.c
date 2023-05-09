/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:24:42 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:24:45 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Synopsis:
    Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
**PARAMETER:
**	lst: Address of pointer to node
**	f: address of function to iterate on the list 
*/
#include "libft_bonus.h"

/*1.check if either argument void, if yes end
**2.create ptr pointer, assign ptr to lst address
**3.go through ptr->next until last node (!ptr) 
**4.while applying (*f) to content of each node (ptr)
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		(*f)(ptr->content);
		ptr = ptr->next;
	}
}
