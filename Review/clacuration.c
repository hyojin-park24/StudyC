/*���� �����
	1. ���ڸ� �Է¹��� �Է��Լ� �ʿ�(scanf)
	2. ���ڸ� ����� ����Լ� �ʿ�(printf)
	3. switch~case ���� ���� ���ڿ� ���� �� �ʿ� 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*�� ���� ������ ���� ���� �� �ʱ�ȭ*/
	int a , b, result;
	char cal;
	/*���� ���*/
	printf("�� ���� �Է��ϼ���: ");
	/*���� �Է�*/
	scanf("%d %d", &a, &b);
	/*���� ��ȣ ���*/
	printf("���� ��ȣ�� �Է��ϼ��� : ");
	/*���� ��ȣ �Է�*/
	scanf(" %c", &cal);

	/*���� �����*/
	switch (cal)
	{
		case '+':
			result = a + b;
			printf("%d %c %d�� ���� %d�Դϴ�.", a, cal, b, result);
			break;
		case '-':
			result = a - b;
			printf("%d %c %d�� ���� %d�Դϴ�.", a, cal, b, result);
			break;

		case '*':
			result = a * b;
			printf("%d %c %d�� ���� %d�Դϴ�.", a, cal, b, result);
			break;

		case '%':
			result = a % b;
			printf("%d %c %d�� ���� %d�Դϴ�.", a, cal, b, result);

			break;

	}

	return 0;
}
