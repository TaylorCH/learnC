/* 
��Ŀ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
*/

#include <stdio.h>

#define M 40

int main()
{
	int sum_bearing = 2, sum_bore = 0,
		*p_bearing = &sum_bearing, *p_bore = &sum_bore, *p_new = NULL, i;
	
	
	for (i = 0; i <= M; i++)
	{
		p_new = p_bore;
		*p_bearing += *p_bore;
		p_bore = p_bearing;
		p_bearing = p_new;
		
		printf("The numbers of rabits: %d\n", (*p_bearing + *p_bore));
	}
	
	return 0;
}
