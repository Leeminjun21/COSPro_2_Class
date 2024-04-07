#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2;	// 후위 감소
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
	return 0; 
}

/*int num;
	num = 20;
	printf("%d \n", num);

*/

/*
int num1 = 3, num2 = 4;
	int result1 = num1 + num2;
	int result2 = num1 - num2;
	int result3 = num1 * num2;
	int result4 = num1 / num2;

	//num1 = num2 = 0;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("%d + %d = % d \n", num1, num2, result1);
	printf("%d - %d = % d \n", num1, num2, result2);
	printf("%d * %d = % d \n", num1, num2, result3);
	printf("%d / %d = % d \n", num1, num2, result4);


	return 0;
	*/