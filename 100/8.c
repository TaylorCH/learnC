/* Êä³ö9*9¿Ú¾÷¡£*/

#include <stdio.h>

int main()
{
	int i, j;
	
	printf("9*9: \n\n\n");
	for (i = 1; i <= 9; i++){
		for (j = 1; j <= i; j++){
			printf("%d * %d = %-3d ", j, i, i * j);
		}
		printf("\n");
	}
	
	return 0;
}
