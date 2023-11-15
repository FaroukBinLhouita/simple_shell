void free_cmd_argv(char **cmd_argv, int tokens)
{
	for (int i = 0; i < tokens; i++)
	{
		free(cmd_argv[i]);
	}
	free(cmd_argv);
}
