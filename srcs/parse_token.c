#include "minishell.h"

t_list	*parse_token(t_list *tokens, t_shell *shell)
{
	t_list	*lst;
	char	*tmp;
	char	*new;

	lst = tokens;
	while (lst)
	{
		new = parser(lst->content, shell);
		tmp = lst->content;
		lst->content = new;
		if (is_parse_wild_path(tmp))
			lst = parse_wildcard(&lst);
		free(tmp);
		lst = lst->next;
	}
	return (tokens);
}