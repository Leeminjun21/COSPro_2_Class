#include <stdio.h>

void example1(void);
void example2(void);
void example3(void);

int GetAbsoValue(int num)
{
	if (num < 0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}
int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
int add(int num1, int num2)
{

	int result = 0;
	result = num1 + num2;
	return result;
}

int sub(int num1, int num2)
{

	int result = 0;
	result = num1 - num2;
	return result;
}

void ShowAddResult(int num)
{
	printf("덧셈 결과 출력 %d\n", num);
}
int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("두개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
	printf("두개의 정수를 입력하세요\n");

}
int main(void)
{
	int num1, num2;
	printf("두개의 정수를 입력하세요\n");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d 증 절댓값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
	
	
	//example1();
	//example2();
	

	return 0;
}

void example1(void)
{
	int num1 = 0, num2 = 0;

	num1 = printf("1234\n");
	printf("  num : %d\n", num1);
}

void example2(void)
{
	int test = 0;


	test = add(1, 2);
	printf("add test = %d \n", test);
	ShowAddResult(test);

	test = sub(1, 2);
	printf("sub test = %d \n", test);
}

void example3(void)
{
	int num1 = 0, num2 = 0, test = 0;

	HowToUseThisProg();

	num1 = ReadNum();
	num2 = ReadNum();
	test = add(num1, num2);
	ShowAddResult(test);
}