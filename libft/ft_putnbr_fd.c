/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:16:25 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:16:27 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Use write to output integer n to required file descriptor(fd)
** Description:
    Outputs the integer ’n’ to the given file
	descriptor.*/
#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	buf;

	if (n != -2147483648)
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		buf = '0' + (n % 10);
		write(fd, &buf, 1);
	}
	else
		write(fd, "-2147483648", 11);
}

//check for overbound
//check negative int, write negative
/*write int with recursive function, starting from front, 1 digit at a time*/
		//write boundary if overbound