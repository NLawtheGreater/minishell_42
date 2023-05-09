/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:15:07 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:15:08 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	k;

	k = 0;
	while (k < n)
	{
		if (*(unsigned char *)(s1 + k) != *(unsigned char *)(s2 + k))
		{
			return (*(unsigned char *)(s1 + k) - *(unsigned char *)(s2 + k));
		}
		k++;
	}
	return (0);
}
