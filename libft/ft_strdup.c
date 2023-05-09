/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:31 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:32 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(ft_strlen(src) + 1);
	if (dst == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
	//copy string from src until end of src
	//terminate will null
/*#include<stdio.h>
#include<string.h>

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$ @ %p\n", str, str); 
	/src string and addess
	allocated = strdup(str);
	printf("c  : alloc : $%s$ @ %p\n", allocated, allocated); 
	//dst string and address with strdup
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$ @ %p\n", allocated, allocated); 
	//dst string and address with ft_strdup
}*/
