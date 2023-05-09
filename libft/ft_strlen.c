/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                           :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:56:05 by niclaw            #+#    #+#             */
/*   Updated: 2022/06/17 21:12:58 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
/*int main()
{
	char 	x[] = "Thereis19characters";
	
	printf("%d", ft_strlen(x));
}
*/