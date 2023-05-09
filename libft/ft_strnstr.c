/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:42 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:18:43 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Synopsis:
	Find string (needle) in string (haystack) within the legth (len) given
Description:
	-If needle is an empty string, haystack is returned;
	-if needle occurs nowhere in haystack or NULL is returned; 
	-otherwise a pointer to the first character of the first occurrence
	 	of needle is returned. Iflen is too short, NULL is returned 
*/
#include "libft.h"

/*1.check if needle is empty string
	2.start looking and moving through haystack 1-by-1
	3.Checking whether needle is like haystack and moving through the whole line
	4.Check that needle was found and return pointer to first occurrence of 
		needle in haystack
	5. len too short or needle not found: return NULL
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ind1;
	size_t	ind2;

	if (*needle == 0)
	{
		return ((char *)(haystack));
	}
	ind1 = 0;
	ind2 = 0;
	while (ind1 < len && haystack[ind1])
	{
		while (*(unsigned char *)(haystack + ind1 + ind2) \
			== *(unsigned char *)(needle + ind2) && needle[ind2] \
			&& ind1 + ind2 < len)
		{
			if (needle[ind2 + 1] == '\0')
				return ((char *)(haystack + ind1));
			ind2++;
		}
		ind2 = 0;
		ind1++;
	}
	return (NULL);
}
