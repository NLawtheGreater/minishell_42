/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:15:52 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:15:54 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Use write to output c to required file descriptor(fd)
** Description:
    Outputs the character ’c’ to the given file
	descriptor.*/
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
