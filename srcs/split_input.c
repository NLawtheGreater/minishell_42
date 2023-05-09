#include "minishell.h"

t_list *split_input(char *line)
{
	int		wlen;
	t_list	*token;

	token = NULL;
	while (*line)
	{
		wlen = add_token(&token, line);
		if (wlen < 0)
		{
			ft_lstclear(&token, & /*free token*/);
			return (NULL);
		}
		line += wlen;
		if(!ft_strchr(FIELDS, *line))
			continue ;
		while (*line && ft_strchr(FIELDS, *(++line)))
			if (!*line)
				break ;
	}
	return (token);
}

int	add_token(t_list **token, char *line)
{
	int 	wlen;
	char	*word;
	t_list	*new;

	wlen = wordlen(line);
	if (wlen < 0)
		return (-1);
	word = ft_calloc(sizeof(char), wlen + 1);
	ft_strlcpy(word, line, wlen + 1);
	new = ft_lstnew(word);
	if (!token)
		*token = new;
	else
		ft_lstadd_back(token, new);
	return (wlen);	
}

void	free_token(void *content)
{
	free(content);
}