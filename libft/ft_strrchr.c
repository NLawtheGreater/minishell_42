/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:55:41 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/24 14:55:56 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  1.start looking and moving through *s 1-by-1, from the back, until start 
		of string
    2.Checking whether c is like str
    3.c not found return NULL*/
char	*ft_strrchr(const char *s, int c)
{
	int	ind1;

	ind1 = ft_strlen((char *)s);
	while (ind1 > 0 && s[ind1] != (char)(c))
	{
		ind1--;
	}
	if (s[ind1] == (char)(c))
		return ((char *)(s + ind1));
	return (NULL);
}
