/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:07 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:18:09 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d_len;
	int				offset;
	unsigned int	index;

	d_len = ft_strlen(dst);
	offset = d_len;
	index = 0;
	if (size == 0 || size <= d_len)
		return (ft_strlen(src) + size);
	while (src[index] != '\0' && index < (size - d_len - 1))
	{
		dst[offset] = src[index];
		offset++;
		index++;
	}
	dst[offset] = '\0';
	return (ft_strlen(src) + d_len);
}
/*
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main(void)
{
	char d[500] = "wow";
	char d1[500] = "wow";
	char jon[500] = "jon";
	char jon1[500] = "jon";
	char test1[] = "";
	char s[500] = "magnitude";
	char s1[500] = "magnitude";
	char d2[500] = "great";
	char d3[500] = "great";
	char s2[500] = "max";
	char s3[500] = "max";
	char test[] = "";

	//printf("%u - %s\n", strlcat(d1, s1, 7), d1);
	printf("%u - %s\n", ft_strlcat(d, s, 7), d);
	//printf("%u - %s\n", strlcat(d2, s2, 4), d2);
	printf("%u - %s\n", ft_strlcat(d3, s3, 4), d3);
	printf("%u - %s\n", strlcat(d2, s2, 13), d2);
	printf("%u - %s\n", ft_strlcat(d3, s3, 13), d3);
	printf("%u - %s\n", strlcat(jon1, test1, 6), jon1);
	printf("%u - %s\n", ft_strlcat(jon, test, 6), jon);
}*/
