/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:19:03 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:19:04 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
*/

#include "libft.h"
/*1.return NULL if either argument NULL
**2.search whether ANY ONE of set matches with the S1 using strchr, moves 
**	down s1 until there is no match, s1 no match location is recorded
**3.find strlen of s1 from position recorded (start of trim area) to the end of 
**	string 
**4.search whether ANY ONE of set matches with the S1 using strchr, moves up s1 
**	until there is no match, s1 no match location is recorded (end of trim area)
**5.return trimmed string with substring, substring creates malloc 
**	NULL-terminated string
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen((char *)s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
