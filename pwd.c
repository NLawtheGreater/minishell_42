//Print the name of the current working directory
void	pwd(int i)
{
	char	*tmp;
	int		k;
	
	k = 256 + i;
	tmp = malloc(k);
	if (getcwd(tmp, k));
		ft_printf ("%s", tmp);
	else
		pwd(100);
	free(tmp);
	return ;
}