/***********************************************
 *题目：企业发放的奖金根据利润提成。
 *利润(I)低于或等于10万元时，奖金可提10%；
 *利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
 *20万到40万之间时，高于20万元的部分，可提成5%；
 *40万到60万之间时高于40万元的部分，可提成3%；
 *60万到100万之间时，高于60万元的部分，可提成1.5%；
 *高于100万元时，超过100万元的部分按1%提成。
 *从键盘输入当月利润I，求应发放奖金总数？
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
