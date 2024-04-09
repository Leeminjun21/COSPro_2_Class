#include <stdio.h>

int main(void)
{
	char sel;

	printf("M 오전, A 오후, E 저녁 \n ");
	printf("입력 : ");
	scanf("%c", &sel);

	switch (sel)
	{
		case 'm':
		case 'M':
			printf("Morning \n");
			break;
		case 'a':
		case 'A':
			printf("Afternoon \n");
			break;
		case 'e':
		case 'E':
			printf("Evening \n");
			break;

		default :
			printf("잘못 입력했습니다. \n");

	}
	return 0;
}

/*
int num = 0;

printf("정수 입력 :");
scanf("%d", &num);

if (num < 0)
{
printf("입력된 수는 음수입니다.\n");
}
if (num > 0)
{
printf("입력된 수는 양수입니다.\n");
}
if (num == 0)
{
printf("입력된 수는 0입니다.\n");
}
*/

/*
	int opt;
	double num1 = 0.0, num2=0.0;
	double result = 0.0;

	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("선택하세요 ?");
	scanf("%d", &opt);

	if ((opt < 1) || (opt > 4))
	{
		printf("잘못 입력 하였습니다. \n");
		return -1;
	}
	printf("두개의 실수 입력");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	if (opt == 2)
	{
		result = num1 - num2;
	}
	if (opt == 3)
	{
		result = num1 * num2;
	}
	if (opt == 4)
	{
		result = num1 / num2;
	}
	printf("결과 : %lf \n", result);


	*/

	/*
		int num;
		printf("정수 입력 : ");
		scanf("%d", &num);

		if (num < 0)
		{
			printf("입력된 정수는 0보다 작다 \n");
		}
		else
		{
			printf("입력된 정수는 0보다 작지 않다 \n");
		}
		*/

		/*
			int opt;
			double num1 = 0.0, num2 = 0.0;
			double result = 0.0;

			printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
			printf("선택하세요 ?");
			scanf("%d", &opt);


			printf("두개의 실수 입력");
			scanf("%lf %lf", &num1, &num2);

			if (opt == 1)
			{
				result = num1 + num2;
			}
			else if (opt == 2)
			{
				result = num1 - num2;
			}
			else if (opt == 3)
			{
				result = num1 * num2;
			}
			else if (opt == 4)
			{
				result = num1 / num2;
			}
			else
			{
				printf("잘못 입력 하였습니다. \n");
				return -1;
			}
			printf("결과 :%lf \n", result);
			*/

			/*
			int num, abs;

			printf("정수 입력 : ");
			scanf("%d", &num);

			abs = (num > 0) ? num : num * (- 1);

			printf("절댓값 : %d \n\n", abs);
			*/

			/*
			int sum = 0;
			int num = 0;

			while (1)
			{
				sum += num;
				if (sum > 5000) break;
				num++;
			}
			printf("sum : %d \n", sum);
			printf("num : %d \n", num);
			*/

			/*
			int num = 0;

			printf("star ! :");

			for (num = 1; num < 20; num++)
			{

				if ((num % 2 == 0) || (num % 3 == 0))
				{
					continue;
				}
				printf("%d ", num);

			}
			printf("end!  \n\n");
			*/

			/*
			int num;
			printf("1~5 정수 입력 :");
			scanf("%d", &num);
			switch (num)
			{
				case 1:
					printf("1은 one \n");
					break;
				case 2:
					printf("2은 two \n");
					break;
				case 3:
					printf("3은 three \n");
					break;
				case 4:
					printf("4은 four \n");
					break;
				case 5:
					printf("5은 five \n");
					break;
				default:
					printf("I do now know~~ \n");
			}
			*/