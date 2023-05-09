/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:25:17 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:25:21 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Synopsis:
    start new linked list
Parameter	
	content:content to create the node with
Description:
    Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.*/
#include "libft_bonus.h"
#include <stdio.h>

/*1.initialize node
**2.memallocate with size of t_list
**3.Fill in content and next, pointing from *head
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
