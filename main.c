#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 2;
	int j = 0;
	int cnt = 0;
	int sum = 0;
	printf("1-num������ ���� ������ ���� ���ϼ��� num�� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("\n\n\nfor�� �̿� \n\n\n");

	for (i = 2; i <= num; i = i + j)
	{
		j = j + 1;
		sum = sum + i;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
	}

	printf("\n\n\nwhile�� �̿� \n\n\n");
	i = 2; // i �ʱ�ȭ
	sum = 0;
	j = 0;

	while (i <= num)
	{
		sum = sum + i;
		j = j + 1;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
		i = i + j;
	}

	printf("\n\n\ndo while�� �̿� \n\n\n");
	i = 2; // i �ʱ�ȭ
	sum = 0;
	j = 0;
	do
	{
		sum = sum + i;
		j = j + 1;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
		i = i + j;
	}while (i <= num);

	return 0;

}

/*
int num = 0;
int i = 0;
int sum = 0;

printf("1-num������ ���� ���ϼ��� num�� �Է��ϼ��� : ");
scanf("%d", &num);
printf("\n\n\nfor�� �̿� \n\n\n");
for (i = 1; i<= num;i++)
{
	//sum = sum + i;
	sum += i;
	//printf("%d   %d \n", i, sum);

	printf("%d + ", i);
}

printf("\b\b = %d\n\n\n" ,sum);  //backspace�� �̿��Ͽ� + �����

printf("\n\n\nwhile�� �̿� \n\n\n");
i = 1; // i �ʱ�ȭ
sum = 0;
while (i <= num)
{
	//sum = sum + i;
	sum += i;
	//printf("%d   %d \n", i, sum);
	printf("%d + ", i);
	i++;
}
printf("\b\b = %d\n\n\n", sum);  //backspace�� �̿��Ͽ� + �����

printf("\n\n\ndo while�� �̿� \n\n\n");
i = 1; // i �ʱ�ȭ
sum = 0;
do

{
	//sum = sum + i;
	sum += i;
	//printf("%d   %d \n", i, sum);
	printf("%d + ", i);
	i++;
} while (i <= num);

printf("\b\b = %d\n\n\n", sum);  //backspace�� �̿��Ͽ� + �����
*/

/*
//sum = sum + i;
//printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);

for (cnt = 2; cnt <=num ; cnt++)
	{
	if(num>=cnt)break;
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt,j,i,sum);
	}
*/