/* Forth */ 
#include <stdio.h>
#include <stdlib.h>

#define r 2
#define c 3


int main() 
{
//	int r =2,c=3;
	int p[2][3] = { {1,2,3}, 
					{4,5,6}};
	int i, j, **p_trans;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++){
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	
	p_trans = (int **)malloc(sizeof(int *) * c);
	
	
	for (i = 0; i < c; i++) {
		p_trans[i] = (int *)malloc(sizeof(int) * r);
	}
	
	
	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++){
			p_trans[i][j] = p[j][i];
		}
	}
	
	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			printf("%d ", p_trans[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}



//char *iii(void)
//{	
//	char a='a', *p;
//	p = &a;
//	printf("%x\n", p);
//	return p;
//	
//}
//
//main()
//{
//	int i, j, k;
//	float ii;
//	char ch1, ch2;
//	iii();
//
//	
//	
////	char t = '1';
////	printf("%c\n%d\n", t, (int) t );
////	
////	
////	
////	int aa[2] = {1,2};
////	printf("%d\n%d\n", aa[0], aa[1]);
////	iii(aa);
////	printf("%d\n%d\n", aa[0], aa[1]);
////	
////	
////	int m[3][4] = { 1,1,1,1,
////					1,1,1,1,
////					1,1,1,1 };
////	
////	
////	
////	
////	scanf("%c", &ch1);
////	printf("%d", (int) ch1);
//	
//	
//	
////	do
////	{
////		scanf("%c", &ch);
////	} while (ch != '\n');
//	
////	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
////	scanf("%f", &ii);
////	printf("%f", ii);
////	printf("%d %d %d\n", i, j, k);
////	scanf("%d a%d /%d",&i,&j,&k);
////	printf("%d %d %d", i, j, k);
//	
//	
//	return 0;
//}
