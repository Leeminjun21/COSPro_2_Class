#include <stdio.h>


int main(void)
{
	int num1 = 3;
	int num2 = 4;
	double divResult;
	//divResult = (double)num1 / (double)num2;
	divResult = (double)num1 / num2;
	printf("나눗셈 결과 : %f \n ", divResult);

	return 0;
	
}

/*
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c  %d \n", ch1, ch1);
	printf("%c  %d \n", ch2, ch2);
	printf("%c  %d \n", ch3, ch3);
	printf("%c  %d \n", ch4, ch4);
	*/

	/*
		double num1 = 245;
		int num2 = 3.14159;
		int num3 = 129;
		char ch = num3;

		printf("정수 245를 실수로 : %lf \n", num1);
		printf("실수 3.14159를 정수로 : %d \n", num2);
		printf("큰 정수 129를 작은 정수로 : %d \n", ch);

		*/