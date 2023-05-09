/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:41 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:42 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Apply any string(pointer) function to the string s, one char at a time 
** Description:
    Applies the function ’f’ on each character of
    the string passed as argument, passing its index
    as first argument. Each character is passed by
    address to ’f’ to be modified if necessary.*/

#include "libft.h"

/*  1.return NULL, if s or f is NULL
    2.apply function f to s with while loop (address of array location given)
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
