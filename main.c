#include <stdio.h>

int main(void)
{	
	float num1;
	double num2;
	long double num3;

	printf(" �Ǽ� �Է�1(e ǥ�������) : ");
	scanf_s("%f", &num1);
	printf("�Է��� �Ǽ� %f \n", num1);

	printf(" �Ǽ� �Է�2(e ǥ�������) : ");
	scanf_s("%lf", &num2);
	printf("�Է��� �Ǽ� %lf \n", num2);

	printf(" �Ǽ� �Է�3(e ǥ�������) : ");
	scanf_s("%Lf", &num3);
	printf("�Է��� �Ǽ� %Lf \n", num3);


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
	printf("%-8s %14s %5s \n", "�� ��", "������", "�г�");
	printf("%-8s %10s %5s \n", "�� ��", "������", "�г�");
	*/
	
	/*
		int num1, num2, num3;

		printf("�� ���� ���� �Է�:");
		scanf("%d %o %x", &num1, &num2, &num3);
		printf("�Էµ� ���� 10�� ��� : ");
		printf("%d %d %d \n", num1, num2, num3);
		*/