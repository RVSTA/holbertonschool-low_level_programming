#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Point to new string, NULL on fail.
  */
char *argstostr(int ac, char **av)

{
	int p, o, t, joke;
	char *gtr;

	joke = 0;
	t = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	p = 0;
	while (p < ac)
	{
		o = 0;
		while (av[p][o])
		{
			joke++;
			o++;
		}
		joke++;
		p++;
	}
	gtr = malloc((sizeof(char) * joke) + 1);
	if (gtr == NULL)
		return (NULL);
	p = 0;
	while (p < ac)
	{
		o = 0;
		while (av[p][o])
		{
			gtr[t] = av[p][o];
			o++;
			t++;
		}
		gtr[t] = '\n';
		t++;
		p++;
	}
	gtr[t] = '\0';
	return (gtr);
}
