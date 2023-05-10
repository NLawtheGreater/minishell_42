#include <minishell.h>

void init(t_shell *shell)
{
	sigemptyset(&shell->sigint.sa_mask);
	shell->sigint.sa_flags = SA_RESTART;
	sigaction(SIGINT, &shell->sigint, NULL);
	shell->sigint.__sigaction_u.__sa_handler = handling_signal;
	shell->exstat = 0;
	shell->sinput = dup(0);
	sigemptyset(&shell->sigquit.sa_mask);
	shell->sigquit.sa_flags = SA_RESTART;
	sigaction(SIGQUIT, SIG_IGN, NULL);

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