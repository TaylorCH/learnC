/* ��Ŀ�����������������Ƕ������ɴ��⣺
ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ�� 
*/

#include <stdio.h>

int main()
{
	int score;
	
	printf("Enter the score: ");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("The rank is: A.");
	else if (score >= 60 && score <= 89)
		printf("The rank is: B.");
	else
		printf("The rank is: C.");
	
	return 0;
}
