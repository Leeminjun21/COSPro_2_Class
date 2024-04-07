#include <stdio.h>

int main(void)
{
	char ch = 9;
	int num = 0;
	long numl = 0;
	float numf = 0.0;
	double numd = 0.0;

	printf("변수 ch의 크기 %d \n", sizeof(ch));
	printf("변수 num의 크기 %d \n", sizeof(num));
	printf("변수 numl의 크기 %d \n", sizeof(numl));
	printf("변수 numf의 크기 %d \n", sizeof(numf));
	printf("변수 numd의 크기 %d \n", sizeof(numd));
	


	printf("\n\n\n");
	return 0;
	
	
}

/*
	int num1 = 0, num2 = 0;
	int result = 0;
	printf("두개의 정수를 입력해 주세요.  ");
	//scanf("%d", &num1);
	//scanf("%d", &num2);
	scanf("%d %d", &num1, &num2);

	printf("입력된 정수는 (%d,%d) 입니다. \n", num1, num2);
	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	result = num1 - num2;
	printf("%d - %d = %d \n", num1, num2, result);

	result = num1 * num2;
	printf("%d * %d = %d \n", num1, num2, result);

	result = num1 / num2;
	printf("%d / %d = %d \n", num1, num2, result);

	result = num1 % num2;
	printf("%d %% %d = %d \n", num1, num2, result);


	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;
	printf(" 0xA7의 10진 정수값 : %d \n", num1);
	printf(" 0x%X의 10진 정수값 : %d \n", num1,num1);
	printf(" 0x43의 10진 정수값 : %d \n", num2);
	printf(" 0x%X의 10진 정수값 : %d \n", num2,num2);

	printf(" 032의 10진 정수값 : %d \n", num3);
	printf(" 0%o의 10진 정수값 : %d \n", num3,num3);

	printf(" 024의 10진 정수값 : %d \n", num4);
	printf(" 0%o의 10진 정수값 : %d \n", num4, num4);
	*/
