/*선택문02 switch~case문
	1. 중첩 if문 
	- 선행조건이 필요할 때 사용
	-  if 실행문 안에 if문
	- 불필요한 조건 검사를 하지 않아도됨
	- 실행 효율을 위해 의도적으로 중첩해 사욜할 수 있음 
		=> 분할 정복 기법
			- 실행 시간을 줄여줌 
			- 코드 읽기가 어려워지므로 사용할 때 주의 필요

	2. switch ~ case문
	- 하나의 변수에 여러가지 변화를 줄 때 
	- if문은 불특정한 변수에 경우의 수를 두는데 참 거짓 두개로 나뉘면
	- switch문은 경우의 수보다는 확실한 길을 둘때 사용 
	- 여러개 상수 중에서 조건에 해당하는 하나를 골라서 사용
	- 조건식은 정수식만 사용 가능! 
	- 기본적으로 case는 break를 포함!
	- 정수값으로 실행할 문장을 결정

	※ if else구문은 쓸 수 있는 모든상황에 switch문을 쓸 수 있는건 아니지만,
	  switch문은 if else문으로 대체 가능하다.

*/

#include <stdio.h>

int main()
{
	/* 중첩 if문
	int a = 20, b = 10;
	if (a > 10 )		//a가 10보다 클 경우가 참일 때 중첩 if문 실행
	{
		if (b >= 0)		//b가 0보다 클 경우가 참이면
		{
			b = 1;		//b에 1을 대입
		}
		else
		{
			b = -1;		//거짓이면 -1대입
		}
	}
	printf("a : %d, b : %d\n", a, b);
	*/

	int rank = 2, m = 0;

	switch (rank)			// rank의 값이 얼마인지 확인
	{
	case 1:					//rank가 1이면
		m = 300;			//m = 300을 수행
		break;				//블록 벗어나서 pritf수행
	case 2:					//rank가 2이면
		m = 200;			//m = 200을 수행
		break;				//블록 벗어나서 printf수행
	case 3:					//rank가 3이면
		m = 100;			//m = 100을 수행
		break;				//블록 벗어나서 printf수행
	default:				//rank와 일치하는 case의 값이 없으면
		m = 10;				//m = 10을 수행하고
		break;				//블록 벗어서나서 printf수행
	}

	//default는 상수식을 쓰지 않으면 생략 가능, switch안에만 있으면 위치 어디든 상관없다 
	//break는 필요에 따라 생략 가능, 식이 연결될 때만 사용. 유의하기! 
	printf("m : %d", m);
	return 0;
}