/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:15:36 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:15:39 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	ind;

	if (c < 0)
		c *= -1;
	ind = 0;
	while (ind < len)
	{
		*(char *)(b + ind) = c;
		ind++;
	}
	return (b);
}
//for(ind = 0; ind < len; ind++)
//{
// *(char*) (b + ind) = c;
// }