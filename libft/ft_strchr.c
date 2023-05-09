/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:09 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:11 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  1.start looking and moving through *str 1-by-1 until *str=NULL
    2.Checking whether c is like str, if found return that location in str
    3.c not found return NULL*/

char	*ft_strchr(const char *str, int c)
{
	char	check;

	check = (char)c;
	while (*str && check != *str)
	{
		str++;
	}
	if (check == *str)
		return ((char *)(str));
	return (NULL);
}
//for ( ind1 = 0; !str[ind1]; ind1++)