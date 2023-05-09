/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <niclaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:25:04 by niclaw            #+#    #+#             */
/*   Updated: 2023/02/18 22:47:35 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SYNOPSIS
	Return new list or NULL if allocation fails
**DESCRIPTION
	Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/
#include "libft_bonus.h"

/*1.check if either argument void, if yes end
**2.create list pointer and element pointer (ptr & elem) 
**3.initialize ptr with 0 to give address 
**4.loop checking lst as end of original list
**5.Use ft_lstnew on result of (f)(content), and store in element
**6.check element, if void. then clear ptr with ft_lstclear.
	Then returning NULL (new list creation fail)
**7.Add element to ptr using ft_lstadd_back
**8.scroll through lst with lst->next
**9.return pointer to new list*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*ptr;
	t_list	*elem;

	if (!f || !del || !lst)
		return (NULL);
	ptr = 0;
	while (lst)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (!elem)
		{
			ft_lstclear(&ptr, del);
			free (elem);
			free (ptr);
			return (NULL);
		}
		ft_lstadd_back(&ptr, elem);
		lst = lst->next;
	}
	return (ptr);
}
