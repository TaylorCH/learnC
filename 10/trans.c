/* ¾ØÕó×ªÖÃ */

#include <stdio.h>
#include <stdlib.h>

#define R 100
#define C 100

int **trans(int r, int c, int **p);


int main()
{
	int *p;
	
		
	return 0;
}

int **trans(int r, int c, int **p) 
{
	int i, j, **p_trans;
	
	p_trans = malloc(sizeof(int *) * c);
	
	for (i = 0; i < r; i++) {
		p_trans[i] = malloc(sizeof(int) * r);
	}
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++){
			p_trans[j][i] = p[i][j];
		}
	}
	
	return **p_trans;	
}
