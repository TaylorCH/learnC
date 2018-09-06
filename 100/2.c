/***********************************************
 *��Ŀ����ҵ���ŵĽ������������ɡ�
 *����(I)���ڻ����10��Ԫʱ���������10%��
 *�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
 *20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
 *40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
 *60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
 *����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
 *�Ӽ������뵱������I����Ӧ���Ž���������
 *****************************************************/
 
 #include <stdio.h>
 
 int main()
 {
 	float profit, bonus;
 	float
 		region1 = 100000 * 0.1,					// 0-100000
 		region2 = region1 + 100000 * 0.075,		// 100000-200000
 		region3 = region2 + 200000 * 0.05, 		// 200000-400000
 		region4 = region3 + 200000 * 0.03, 		// 400000-600000
 		region5 = region4 + 400000 * 0.015; 		// 600000-1000000
 	
 	printf("Enter your profit: $");
 	scanf("%f", &profit);
 	 	
 	if (profit >= 0 && profit <= 100000)
 		bonus = profit * 0.1;
 	else if (profit <= 200000)
 		bonus = (profit - 100000) * 0.075 + region1;
	else if (profit <= 400000)
 		bonus = (profit - 200000) * 0.05 + region2;
 	else if (profit <= 600000)
 		bonus = (profit - 400000) * 0.03 + region3;
 	else if (profit <= 1000000)
 		bonus = (profit - 600000) * 0.015 + region4;
 	else if (profit > 1000000)
 		bonus = (profit - 1000000) * 0.01 + region5;
 	else
 		printf("Enter is invalid");
 	
 	printf("Your bonus is: $%.2f\n", bonus);
	 	
 	return 0;
 }
