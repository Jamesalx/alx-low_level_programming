#include <stdio.h>

int main (int argc, char *argv[])
{
	int i;
	
	printf("argc = %d\n", argc);
	printf("my name is slim shady\n");
	
	for (i = 0; i < argc; i++)
	{
		 printf("argv[%d] = %s", i, argv[i]);
	}
	return (0);
}

