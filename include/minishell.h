#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
 # define PROMPT_MSG ""

# define FIELDS " \t\n\0"
# define QUOTES "'""

typedef struct	s_token
{
	char	**tokens;
	char	**fg;
	char	**fgg;

	int		opt;
}			t_token;
