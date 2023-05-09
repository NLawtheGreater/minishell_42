/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:25:31 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:25:34 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
**Synopsis:
	Counts the number of nodes in a list.
**Parameter:
**	The begining of the list
*/
#include "libft_bonus.h"

/*1.Check if list is void, if yes return 0 (0 size)
**2.assign start of list to ptr
**2.cycle through node pointer with linker, while counting
	checking for the NULL link
**3.return count
*/
int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	if (!lst)
		return (0);
	ptr = lst;
	i = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
