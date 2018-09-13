/* ¾ØÕó×ªÖÃ */

#include <stdio.h>
#include <stdlib.h>

#define R 100
#define C 100

int **trans(int **p, int r, int c);
void display_matrix(int **p, int r, int c);


int main()
{
	int i, j, r, c, **array, **p_trans;
	
	printf("Enter rows and column of matrix: ");
	scanf("%d %d", &r, &c);
	
	array = (int **) malloc(sizeof(int *) * r);
	
	for (i = 0; i < r; i++) {
		array[i] = (int *) malloc(sizeof(int) * c);
	}
	
	printf("\nEnter elements of matrix: \n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter elements array[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &array[i][j]);
			
		}
	}	
	
	p_trans = trans(array, r, c);
	
	display_matrix(p_trans, c, r);
	
	for (i = 0; i < r; i++) {
		free(array[i]);
	}
	for (j = 0; j < c; j++) {
		free(p_trans[j]);
	}
	
	free(array);
	free(p_trans);
	array = NULL;
	p_trans = NULL;
	
	return 0;
}

int **trans(int **p, int r, int c) 
{
	int i, j, **p_trans;
	
	p_trans = (int **) malloc(sizeof(int *) * c);
	
	for (i = 0; i < c; i++) {
		p_trans[i] = (int *) malloc(sizeof(int) * r);
	}
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++){
			p_trans[j][i] = p[i][j];
		}
	}
	
	return p_trans;	
}

void display_matrix(int **p, int r, int c) 
{
	int i, j;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	
}
