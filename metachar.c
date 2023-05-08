#include "minishell.h"

int	is_opt(char *s)
{
	if (!s)
		return (0);
	if (*s != '&' && *s != '|')
		return (0);
	if (!ft_strncmp(s, "||", 2))
		return (2);
	else if (!ft_strncmp(s, "||", 2))
		return (2);
	else if (!ft_strncmp(s, "|", 1))
		return (1);
	else
		return (-1);
}

int is_redirect(char *str)
{
	if (!str)
		return(0);
	if (*str != '<' && *str != '>')
		return (0);
	if (!ft_strncmp(str, "<<", 2))
		return (2);
	else if (!ft_strncmp(str, ">>", 2))
		return (2);
	else if (!ft_strncmp(str, "<", 1))
		return (1);
	else if (!ft_strncmp(str, ">", 1))
		return (1);
	else
		return (-1);
}