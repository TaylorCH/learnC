/* matrix1 + matrix2  使用多维数组实现两个矩阵的相加  */

#include <stdio.h>

#define R 100
#define C 100

int main()
{
	int i, j, 
		r, c, 
		matrix1[R][C], matrix2[R][C], matrix_sum[R][C];
		
	printf("Enter the row and column of the matrix (r, c): \n");
	scanf("%d, %d", &r, &c);
	
	printf("\nPlease enter the matrix1.\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("matrix1[%d][%d] = ", i + 1, j + 1);
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("\nPlease enter the matrix2.\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("matrix2[%d][%d] = ", i + 1, j + 1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	
	printf("\nThe sum of the two matrixs is \n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", matrix_sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
