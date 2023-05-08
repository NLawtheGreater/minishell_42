//main

#include "minishell.h"

int	main(void)
{
	char	*line;
	char	*input;
	t_shell	shell;

	init(&shell);
	while(true)
	{
		input = readline(PROMPT);
		if (!input)
			break ;
		add_history(input);
		line = handling_input(input);
		if (!line)
			continue;
		if (parse_input(line, &shell) == -1)
			continue ;
		if (cmd_execution (&shell) < 0)
			perror("minishell");
		ft_lstclear(&,&free_cmd);
	}
	printf("exit\n");
	//minishell_clear(&shell);
	//environment_clear(&shell.env);
	exit(EXIT_SUCCESS);
}

