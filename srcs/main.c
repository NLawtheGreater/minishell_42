//main

#include "minishell.h"

static int	qlen(char *str);

int	main(void)
{
	char	*line;
	char	*input;
	t_shell	shell;

	//init(&shell);
	while(1)
	{
		input = readline(PROMPT_MSG);
		if (!input)
			break ;
		add_history(input);
		line = handling_input(input);
		if (!line)
			continue ;
		if (parse_input(line, &shell) == -1)
			continue ;
		/*if (cmd_execution (&shell) < 0)
			perror("minishell");*/
		//ft_lstclear(&token, &free_cmd);
	}
	printf("exit\n");
	//minishell_clear(&shell);
	//environment_clear(&shell.env);
	exit(EXIT_SUCCESS);
}

int	parse_input(char *input, t_shell *shell)
{
	t_list *cmds;
	t_list *tokens;

	tokens = split_input(input);
	free(input);
	while (tokens != NULL)
	{
		printf("%s\n", tokens->content);
		tokens = tokens->next;
	}
	/* Validate token? */
	/*Get tokens from general list into command list*/
	ft_lstclear(&tokens, &free_token);
	return (0);
}

char	*handling_input(char *input)
{
	char	*line;
	int		index;
	
	index = 0;
	while ((input[index] >= 9 && input[index] <= 13) || input[index] == ' ')
		index++;
	if (input[index] == '\0')
	{
		free(input);
		return (NULL);
	}
	line = ft_strtrim(input, "\t");
	free(input);
	if (ft_strlen(line) == 0)
		return (NULL);
	return (line);
} 

int	wordlen(char *str)
{
	int	i;

	i = 0;
	if (is_redirect(str))
		return(is_redirect(str));
	else if (is_opt(str))
		return (is_opt(str));
	while (str[i] && !ft_strchr(" \n\t<>|&", str[i]))
	{
		if (ft_strchr(QUOTES, str[i]))
			i += qlen(&str[i]);
		else
			i++;
	}
	return (i);
}

static int	qlen(char *str)
{
	int	i;
	
	if (!ft_strchr(QUOTES, *str))
		return (0);
	i = 1;
	while (str[i] && str [i] != str[0])
		i++;	
	if (str[i] == str[0])
		return (++i);
	return (i);
}