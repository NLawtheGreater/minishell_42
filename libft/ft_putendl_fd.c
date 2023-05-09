/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:16:05 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:16:10 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Use write to output string s to required file descriptor(fd), followed by /n
** Description:
    Outputs the string ’s’ to the given file descriptor
	followed by a newline.*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*int main(int argc, char **argv)
{
	int fd 
	fd = open("test.txt",O_RDWR);
	ft_putendl_fd(argv[1], fd);
}
*/