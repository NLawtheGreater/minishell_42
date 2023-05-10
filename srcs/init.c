#include <minishell.h>

void init(t_shell *shell)
{
	shell->env->env_tmp = environ;
	shell->env->env_dup = ft_split_dup(environ);
	environ = shell->env->env_dup;
	sigemptyset(&shell->sigint.sa_mask);
	shell->sigint.sa_flags = SA_RESTART;
	sigaction(SIGINT, &shell->sigint, NULL);
	shell->sigint.__sigaction_u.__sa_handler = handling_signal;
	shell->exstat = 0;
	shell->sinput = dup(0);
	sigemptyset(&shell->sigquit.sa_mask);
	shell->sigquit.sa_flags = SA_RESTART;
	sigaction(SIGQUIT, SIG_IGN, NULL);
	if (shell_term(shell) == -1)
	{
		perror (/*error message*/);

	}
}

int	shell_term(t_shell *shell)
{
	tcgetattr(STDIN_FILENO, &shell->terminal->minishell);
	tcgetattr(STDIN_FILENO, &shell->terminal->shell);
	
}

void	handling_signal(int signo)
{
	if (signo == SIGINT)
	{
		ft_putchar_fd('\n', STDOUT_FILENO);
		rl_on_new_line();
		rl_replace_line("", 0);
		rl_redisplay();
	}
}