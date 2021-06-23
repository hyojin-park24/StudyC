/*계산기 만들기
	1. 숫자를 입력받을 입력함수 필요(scanf)
	2. 숫자를 출력할 출력함수 필요(printf)
	3. switch~case 문을 통한 문자에 대한 식 필요 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*두 수를 저장할 변수 선언 및 초기화*/
	int a , b, result;
	char cal;
	/*숫자 출력*/
	printf("두 수를 입력하세요: ");
	/*숫자 입력*/
	scanf("%d %d", &a, &b);
	/*연산 기호 출력*/
	printf("연산 기호를 입력하세요 : ");
	/*연산 기호 입력*/
	scanf(" %c", &cal);

	/*계산식 만들기*/
	switch (cal)
	{
		case '+':
			result = a + b;
			printf("%d %c %d의 값은 %d입니다.", a, cal, b, result);
			break;
		case '-':
			result = a - b;
			printf("%d %c %d의 값은 %d입니다.", a, cal, b, result);
			break;

		case '*':
			result = a * b;
			printf("%d %c %d의 값은 %d입니다.", a, cal, b, result);
			break;

		case '%':
			result = a % b;
			printf("%d %c %d의 값은 %d입니다.", a, cal, b, result);

			break;

	}

	return 0;
}
