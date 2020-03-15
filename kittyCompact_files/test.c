#include <proto/exec.h>

struct Library *kitty;

const char *name = "kittycompact.library";

int main()
{
	printf("looking for %s\n",name);

	kitty = IExec ->  OpenLibrary(name,0);

	if (kitty)
	{
		printf("worked\n");

		IExec -> CloseLibrary(kitty);
	}
	else printf("this sucks not found\n");

	return 0;
}

