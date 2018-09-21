/* ¥Ú”°Õº–Œ */

#include <stdio.h>
#include <stdlib.h>

#define ROW 7

int main()
{
	int i, j, k, mid_row;
	char p_str[ROW+1] = {'\0'};
	
	mid_row = (ROW + 1) / 2;
	
	for (i = 0; i < mid_row; i++) {
		p_str[mid_row] = '*';
		for (k = 1; k <= i; k++) {
			p_str[mid_row - k] = '*';
			p_str[mid_row + k] = '*';
		}
		
		for (j = 0; j < ROW; j++) {
			if (p_str[j] == '\0')
				p_str[j] = " ";
		}
		
		for (j = 0; j <= ROW; j++) {
			printf("%c", p_str[j]);
		}
		
		printf("\n");
	}
	

	for (i = mid_row; i < ROW; i++) {
		
		for (j = 0; j < ROW; j++) {
		p_str[j] = '\0';
		}

		p_str[mid_row] = '*';
		for (k = 0; k < ROW - i; k++) {
			p_str[mid_row - k] = '*';
			p_str[mid_row + k] = '*';
		}
		
		for (j = 0; j < ROW; j++) {
			if (p_str[j] == '\0') 
				p_str[j] = " ";
		}

		for (j = 0; j < ROW; j++) {
			printf("%c", p_str[j]);
		}
		printf("\n");
	}
	
	return 0;
}
