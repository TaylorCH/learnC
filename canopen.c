/* Checks whether a file can be opened for reading */

#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	
	if (argc != 2)
	{
		printf("usage: canopen filename\n");
		return 2;
	}
	
	if ((fp = fopen(argv[1], "r"))  == NULL)
	{
		printf("%s can't be opened\n", argv[1]);
		return 1;
	}
	
	printf("%s can be open\n", argv[1]);
	fclose(fp);
	
	return 0;
}
