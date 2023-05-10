#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <errno.h>
# include <termios.h>
# include <readline/readline.h>
# include <readline/history.h>


# define PROMPT_MSG "yo_yo_yo:"

# define FIELDS " \t\n\0"
# define QUOTES "'\""

typedef struct	s_token
{
	char	**tokens;
	char	**fg;
	char	**fgg;

	int		opt;
}			t_token;

typedef struct s_env
{
	char	**env_tmp;
	char	**env_dup;
}			t_env;

typedef struct s_terminal
{
	struct termios minishell;
	struct termios shell;
}	t_terminal;

typedef struct s_shell
{
	char				*line;
	t_token				*tokens;
	t_env				*env;
	t_list				*cmds;
	t_terminal			*terminal;
	int					exstat;
	int					sinput;
	struct sigaction	sigint;
	struct sigaction	sigquit;
}	t_shell;

extern char **environ;

int	parse_input(char *input, t_shell *shell);
char	*handling_input(char *input);

int	wordlen(char *str);

int	is_opt(char *s);
int is_redirect(char *str);

t_list *split_input(char *line);
int	add_token(t_list **token, char *line);
void	free_token(void *content);

int	validate_token(t_list **tokens);

#endif