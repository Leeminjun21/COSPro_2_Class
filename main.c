#include <stdio.h>

int main(void)
{
	char sel;

	printf("M ����, A ����, E ���� \n ");
	printf("�Է� : ");
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
			printf("�߸� �Է��߽��ϴ�. \n");

	}
	return 0;
}

/*
int num = 0;

printf("���� �Է� :");
scanf("%d", &num);

if (num < 0)
{
printf("�Էµ� ���� �����Դϴ�.\n");
}
if (num > 0)
{
printf("�Էµ� ���� ����Դϴ�.\n");
}
if (num == 0)
{
printf("�Էµ� ���� 0�Դϴ�.\n");
}
*/

/*
	int opt;
	double num1 = 0.0, num2=0.0;
	double result = 0.0;

	printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
	printf("�����ϼ��� ?");
	scanf("%d", &opt);

	if ((opt < 1) || (opt > 4))
	{
		printf("�߸� �Է� �Ͽ����ϴ�. \n");
		return -1;
	}
	printf("�ΰ��� �Ǽ� �Է�");
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
	printf("��� : %lf \n", result);


	*/

	/*
		int num;
		printf("���� �Է� : ");
		scanf("%d", &num);

		if (num < 0)
		{
			printf("�Էµ� ������ 0���� �۴� \n");
		}
		else
		{
			printf("�Էµ� ������ 0���� ���� �ʴ� \n");
		}
		*/

		/*
			int opt;
			double num1 = 0.0, num2 = 0.0;
			double result = 0.0;

			printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
			printf("�����ϼ��� ?");
			scanf("%d", &opt);


			printf("�ΰ��� �Ǽ� �Է�");
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
				printf("�߸� �Է� �Ͽ����ϴ�. \n");
				return -1;
			}
			printf("��� :%lf \n", result);
			*/

			/*
			int num, abs;

			printf("���� �Է� : ");
			scanf("%d", &num);

			abs = (num > 0) ? num : num * (- 1);

			printf("���� : %d \n\n", abs);
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
			printf("1~5 ���� �Է� :");
			scanf("%d", &num);
			switch (num)
			{
				case 1:
					printf("1�� one \n");
					break;
				case 2:
					printf("2�� two \n");
					break;
				case 3:
					printf("3�� three \n");
					break;
				case 4:
					printf("4�� four \n");
					break;
				case 5:
					printf("5�� five \n");
					break;
				default:
					printf("I do now know~~ \n");
			}
			*/