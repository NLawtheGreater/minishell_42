/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:14:42 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:14:44 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
	Represent integer as string
** Description:
	Allocates (with malloc(3)) and returns a string
**  representing the integer received as an argument.
**  Negative numbers must be handled.*/
#include "libft.h"
#include <stdio.h>

/*check if n is 0, only one char needed
**check if n is negative, add char count if negative
**check char count with n/10 loop*/
static int	ft_count(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = (n < 0);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/*	1.count char amount
	2.malloc with char count and check
	3.add null
	4.check negative sign, add negative sign accordingly
	5.copy unsigned version of n, with if negative check
	6.loop and record int into string, using ASCII representation 
		of int. Use BOOLEAN result of negative n to control loop
*/
char	*ft_itoa(int n)
{
	int				i;
	unsigned int	cp;
	char			*res;

	i = ft_count(n) - 1;
	res = malloc(sizeof(char) * (i + 2));
	if (!res)
		return (NULL);
	res[i + 1] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n < 0)
		cp = -1 * n;
	else
		cp = n;
	while (i >= (n < 0))
	{
		res[i] = (cp % 10) + '0';
		cp /= 10;
		i--;
	}
	return (res);
}
