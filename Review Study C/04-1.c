//4장 연산자
// 04-1 산술연산자, 관계 연산자, 논리 연산자 
// 연산자를 배운다는 것 : 명령어를 익히는 것 (연산자는 컴파일되면 명령어로 바뀌므로)

//산술 연산자
// 컴퓨터에서는 가장 중요한 명령어
// 더하기, 빼기, 곱하기, 나누기, 나머지
// 전부 2개의 피연산자를 사용 
// 빼기 - 연산자는 피연산자를 하나만 사용 할 때 부호를 바꾸는 역할

//증감 연산자 (전위, 후위)
// b = a++ => a를 b에 대입후 1씩 증감 ∴ b=1 = 후위연산자
// b = ++a => a에 1씩 증감시킨 후 b에 대입 ∴ b=2 = 전위연산자
// a는 둘 다 값이 2가 되지만 b의 결과값이 달라짐
// 증감 연산자와 대입 연산자
// 즉 다른 연산자와 함께 쓰이게 되면 연산의 결과에 영향을 미침

//관계 연산자 
// 특정한 기준, 조건에 관해 명령할 때 관계 연산자 필요
// 대소 관계 연산자 : < >
// 동등 관계 연산자 : == / !=
// 모두 피연산자 2개 사용, 연산값의 결과 = 0 or 1
//컴퓨터의 참과 거짓
// 컴퓨터는 거짓 (0)만 인식, 그 외의 모든 값은 참 
// 하지만 통상적으로 1을 대표로 참으로 사용함

//논리 연산자
// 참과 거짓을 판단하는 데 사용 
// 비트 연산자와 차이가 있음 
// 비트 연산자는 명령을 하고, 논리 연산자는 결과값을 연산함
// &&(AND) ||(OR) !(NOT)
// 값은 0또는 1이 출력되어야 함 
// &&과 ||은 숏 서킷 룰이 적용됨! 
// 좌항만 판별하여 우항계산하지 않음으로 예상치못한 결과를 만들 수 있으므로
// 사용시 주의해야 함!

#include <stdio.h>

int main(void)
{
	int a, b;
	// 정수형 int a,b 변수 선언
	int sum, sub, mul, inv;
	// 덧셈,뺄셈,곱셈,음수 연산을 위한 
	// int형 sum,sub,mul,inv 변수 선언

	double apple;			
	// 실수형 apple변수 선언
	int banana;				
	// 정수형 banana변수 선언
	int orange;				
	// 정수형 orange변수 선언

	int a1 = 5, b1 = 5;
	// 정수형 a1, b1변수선언 및 5를 대입 후 초기화
	int pre, post;
	// 연산 값 출력을 위한 정수형 pre, post변수 선언

	int a2 = 10, b2 = 20, c2 = 10;
	// 연산할 정수형 a2, b2, c2 변수 선언 및 각 각 값 대입 후 초기화
	int res;                           
	// 결과값을 저장할 변수
	// 각각 a와 b, c 값을 대입해보자.

	int a3 = 30;
	// 정수형 a3변수 선언 및 30을 대입 후 초기화
	int res3;
	// 결과값을 저장할 변수 res3선언


	a = 10;                   // 변수 a에 10 대입 연산(=)
	b = 20;                   // 변수 b에 20 대입 연산(=)
	sum = a + b;
	// 변수 a와 b를 더하기 연산(+) 후 변수 sum에 대입 연산(=)
	sub = a - b;
	// 변수 a와 b를 빼기 연산(-) 후 변수 sub에 대입 연산(=)
	mul = a * b;
	// 변수 a와 b를 곱하기 연산(*) 후 변수 mul에 대입 연산(=)
	inv = -a;
	// 변수 a에 음수 연산(-) 후 변수 inv대입 연산(=)
	
	
	apple = 5.0 / 2.0;		
	// 실수와 실수의 나누기 연산
	banana = 5 / 2;			
	// 정수와 정수의 나누기 연산
	orange = 5 % 2;			
	// 정수와 정수의 나머지 연산(%)

	
	pre = (++a1) * 3;     
	// 전위형 증감 연산자, a1에 1씩 증가 후 3을 곱함
	post = (b1++) * 3;    
	// 후위형 증감 연산자, b1값 그대로 3을 곱함 


	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	// printf함수로 입력할 변수 a와 b에 정수 값 입력 및 출력
	printf("덧셈 : %d\n", sum);
	// printf함수로 연산된 변수 sum 출력
	printf("뺄셈 : %d\n", sub);
	// printf함수로 연산된 변수 sub 출력
	printf("곱셈 : %d\n", mul);
	// printf함수로 연산된 변수 mul 출력
	printf("a의 음수 연산 : %d\n", inv);
	// printf함수로 연산된 변수 inv 출력

	printf("apple : %.1lf\n", apple);
	// printf함수로 apple연산자를 소수점 첫번째 자리 까지 출력
	printf("banana : %d\n", banana);
	// printf함수로 banana연산자를 정수형태로 출력
	printf("orange : %d\n", orange);
	// printf함수로 orange연산자를 정수형태로 출력

	printf("초깃값 a = %d, b = %d\n", a1, b1);
	// printf 함수를 통해 초기값 화면에 출력
	printf("전위형: (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);
	// printf 함수를 통해 전위연산자와 후위연산자 화면에 출력

	res = (a2 > b2);                     
	printf("a2 > b2 : %d\n", res);
	//관계 연산자 10 > 20은 거짓이므로 결괏값은 0
	res = (a2 >= b2);                    
	printf("a2 >= b2 : %d\n", res);
	//관계 연산자 10 >= 20은 거짓이므로 결괏값은 0
	res = (a2 < b2);                     
	printf("a2 < b2 : %d\n", res);
	//관계 연산자 10 < 20은 참이므로 결괏값은 1
	res = (a2 <= b2);                    
	printf("a2 <= b2 : %d\n", res);
	//관계 연산자 10 <= 20은 참이므로 결괏값은 1
	res = (a2 <= c2);                    
	printf("a <= c : %d\n", res);
	//관계 연산자 10 <= 10은 참이므로 결괏값은 1
	res = (a2 == b2);                    
	printf("a2 == b2 : %d\n", res);
	//동등 연산자 10 == 20은 거짓이므로 결괏값은 0
	res = (a2 != c2);                    
	printf("a2 != c2 : %d\n", res);
	//동등 10 != 10은 거짓이므로 결괏값은 0

	res3 = (a3 > 10) && (a3 < 20);                 
	printf("(a3 > 10) && (a3 < 20) : %d\n", res3);
	// AND 연산자 좌항과 우항이 모두 참이면 참
	res3 = (a3 < 10) || (a3 > 20);                 
	printf("(a3 < 10) || (a3 > 20) : %d\n", res3);
	// OR 연산자 좌항과 우항 중 하나라도 참이면 참
	res3 = !(a3 >= 30);                           
	printf("!(a3 >= 30) : %d\n", res3);
	// NOT 연산자 거짓이면 참으로, 참이면 거짓으로

	return 0;
}