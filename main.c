#include <stdio.h>

int main(void)
{
	char ch = 9;
	int num = 0;
	long numl = 0;
	float numf = 0.0;
	double numd = 0.0;

	printf("���� ch�� ũ�� %d \n", sizeof(ch));
	printf("���� num�� ũ�� %d \n", sizeof(num));
	printf("���� numl�� ũ�� %d \n", sizeof(numl));
	printf("���� numf�� ũ�� %d \n", sizeof(numf));
	printf("���� numd�� ũ�� %d \n", sizeof(numd));
	


	printf("\n\n\n");
	return 0;
	
	
}

/*
	int num1 = 0, num2 = 0;
	int result = 0;
	printf("�ΰ��� ������ �Է��� �ּ���.  ");
	//scanf("%d", &num1);
	//scanf("%d", &num2);
	scanf("%d %d", &num1, &num2);

	printf("�Էµ� ������ (%d,%d) �Դϴ�. \n", num1, num2);
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
	printf(" 0xA7�� 10�� ������ : %d \n", num1);
	printf(" 0x%X�� 10�� ������ : %d \n", num1,num1);
	printf(" 0x43�� 10�� ������ : %d \n", num2);
	printf(" 0x%X�� 10�� ������ : %d \n", num2,num2);

	printf(" 032�� 10�� ������ : %d \n", num3);
	printf(" 0%o�� 10�� ������ : %d \n", num3,num3);

	printf(" 024�� 10�� ������ : %d \n", num4);
	printf(" 0%o�� 10�� ������ : %d \n", num4, num4);
	*/