// 형 변환 연산자, sizeof연산자, 복합대입 연산자, 비트 연산자

//형 변환 연산자
// 피연산자가 1개, 피연산자의 값을 원하는 형태로 바꿈
// Ex) 정수 -> 실수, 실수 ->정수로 바꿀 수 있음
// 단! 형태를 바꿀 때는 피연산자의 값을 복사하여 일시적으로 형태를 바꾸는 것
// 연산 후 메모리에 있는 피연산자의 형태나 값은 변하지 않는다!!!
// 일반적으로 '숫자'를 사용할 때는 int를 사용하는 것이 좋다
// 자동형 변환 = 피연산자가 2개 이상이라면 피연산자의 형태는 같아야 하고,
// 피연산자의 형태가 다를 시 형태를 일치 시키는 것이 자동형 변환
// 기준은 크기가 작은 값이 크기가 큰 값으로 바뀜! 
// Ex) 정수(4바이트)와 실수(8바이트)를 연산 => 실수로 자동변환되어 연산됨!!

//sizeof연산자 - 함수 아님!!
// 피연산자를 하나만 사용
// 피연산자의 크기를 바이트 단위로 계산해서 알려줌
// 대상 : 변수, 상수, 수식, 자료형
// 문자열의 크기를 확인하는 데도 사용할 수 있음 
// 배열의 크기를 확인하는 용도로도 사용 가능!

//복합대입 연산자
// 연산 결과를 다시 피연산자에 저장
// +=, -=, /=, %=

//콤마 연산자
// 한 번에 여러 개의 수식을 차례로 나열할 때 사용
// 왼쪽부터 오른쪽으로 차례로 연산을 수행 
// 가장 오른쪽의 피연산자가 최종 결과값이 됨! 

#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	int a1 = 10;
	double b1 = 3.4;

	int a2 = 10, b2 = 20;
	int res2 = 2;

	int a3 = 10, b3 = 20;
	int res3;

	res = ((double)a) / ((double)b);      
	// (double)을 사용해 a와 b의 값을 실수로 형 변환
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;                         
	// (int)를 사용해 res의 값에서 정수 부분만 추림
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	a2 += 20;               
	// a2와 20을 더한 결과를 다시 a2에 저장(+=)
	res2 *= b2 + 10;         
	// b2에 10을 더한 결괏값에 res2를 곱하고 다시 res에 저장(*=)

	res3 = (++a3, ++b3);      
	// 차례로 연산이 수행되며 결과적으로
	// res에 저장되는 값은 증가된 b의 값이다.

	printf("int형 변수의 크기 : %d\n", sizeof(a1));
	printf("double형 변수의 크기 : %d\n", sizeof(b1));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	printf("a = %d, b = %d\n", a2, b2);
	printf("res = %d\n", res2);

	printf("a: %d, b : %d\n", a3, b3);
	printf("res: %d\n", res3);

	return 0;
}