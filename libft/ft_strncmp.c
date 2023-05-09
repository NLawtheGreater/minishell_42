/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:23 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:25 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**check "The comparison is done using unsigned characters, so 
that \\200' is greater than \0'."*/
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while ((s1[k] || s2[k]) && k < n)
	{
		if (s1[k] != s2[k])
		{
			return ((unsigned char) s1[k] - (unsigned char) s2[k]);
		}
		k++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	main(void)
{
	char	s11[] = "this isDnd";
	char	s21[] = "this is";

	printf ("%d\n", ft_strncmp( s11, s21, 9));
	printf ("%d\n", strncmp( s11, s21, 9));
	printf ("%d\n", ft_strncmp( s11, s21, 4));
	printf ("%d\n", strncmp( s11, s21, 4));
	printf ("%d\n", ft_strncmp( s11, s21, 8));
	printf ("%d", strncmp( s11, s21, 8));
}*/