#include <stdio.h>

int main(void)
{	
	float num1;
	double num2;
	long double num3;

	printf(" 실수 입력1(e 표기법으로) : ");
	scanf_s("%f", &num1);
	printf("입력한 실수 %f \n", num1);

	printf(" 실수 입력2(e 표기법으로) : ");
	scanf_s("%lf", &num2);
	printf("입력한 실수 %lf \n", num2);

	printf(" 실수 입력3(e 표기법으로) : ");
	scanf_s("%Lf", &num3);
	printf("입력한 실수 %Lf \n", num3);


	return 0;
	
}	

//printf("test  \"I am a student\" test\b  \n");


/*
int myAge = 12;
	printf(" my age %d, %o %#o %#x %#X \n", myAge, myAge, myAge, myAge, myAge);
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.123456789);
	printf("%e \n", 0.123456789);
	
	double d1 = 1.23e-2;
	double d2 = 1.23e-3;
	double d3 = 1.23e-4;
	double d4 = 1.23e-5;

	printf("%g \n", d1);
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);

	//printf("%s %c \n", "AAAA", 'd');

	/*
	printf("%-8s %14s %5s \n", "이 름", "기계공학", "학년");
	printf("%-8s %10s %5s \n", "이 름", "기계공학", "학년");
	*/
	
	/*
		int num1, num2, num3;

		printf("세 개의 정수 입력:");
		scanf("%d %o %x", &num1, &num2, &num3);
		printf("입력된 정수 10진 출력 : ");
		printf("%d %d %d \n", num1, num2, num3);
		*/
