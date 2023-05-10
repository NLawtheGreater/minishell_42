#include <minishell.h>

int	exp_str(char *token, char **str)
{
	int		wlen;
	char	*s;

	wlen = 0;
	while (!ft_strchr("$'\"\0", token[wlen]))
		wlen++;
	s = ft_calloc(wlen, sizeof(char));
	ft_strlcpy(s, token, wlen); /*check*/
	return (wlen);
}

int	exp_sq_str(char *token, char **str)
{
	int		wlen;
	char	*s;

	if (*token != '\'')
		return (0);
	wlen = 1;
	while (token[wlen] != '\'')
		wlen++;
	s = ft_calloc(wlen - 1, sizeof(char));
	ft_strlcpy(s, token + 1, wlen - 1);
	return (wlen + 1); /*Check*/
}

int	exp_dq_str(char *token, char **str)
{
	int		wlen;
	char	*s;

	wlen = 0;
	if (*token == '"')
		token++;
	while (!ft_strchr("$\"\0", token[wlen]))
		wlen++;
	s = ft_calloc(wlen, sizeof(char));
	ft_strlcpy(s, token, wlen); /*check*/
	return (wlen);
}

