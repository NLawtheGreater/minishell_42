/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:14:56 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:14:58 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*1.converting c into unsigned char
**2.go through *s from beginning
**3.check for c (character) 
**4.return matching pointer
**5.not finding, return NULL*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			ind;
	unsigned char	check;

	check = c;
	ind = 0;
	while (ind < n)
	{
		if (*(unsigned char *)(s + ind) == check)
			return ((void *)(s + ind));
		ind++;
	}
	return (NULL);
}
