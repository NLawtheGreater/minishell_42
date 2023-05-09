execute()
{
int	tmpin;
int	tmpout;
int	fdin;
int	fdout;
int	ret;
int	i;

tmpin=dup(0);
tmpout=dup(1);

if(/* infile */)
	fdin = open(infile,O_READ);
else
	fdin=dup(tmpin);
i = 0;
while(i< /* number_simple_commands*/)
{
	dup2(fdin, 0);
	close(fdin);
	if(i == /* number_simple_command */ - 1)
	{
		if(/*outfile*/)
			fdout=open(/*outfile*/,);
		else
			fdout=dup(tmpout);
	}
	else
	{
		int fdpipe[2];
		pipe(fdpipe);
		fdout=fdpipe[1];
		fdin=fdpipe[0];
	}

	dup2(fdout,1);
	close(fdout);

	ret=fork();
	if(ret == 0)
	{
		execve();
		perror();
		exit(1);
	}
	i++;
}
dup2(tmpin, 0);
dup2(tmpout, 1);
close (tmpin);
close (tmpout);
if (! /*background*/)
	waitpid(ret, NULL);
}

