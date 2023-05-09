/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:15:17 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:15:18 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		*(char *)(dst + ind) = *(char *)(src + ind);
		ind++;
	}
	return (dst);
}
