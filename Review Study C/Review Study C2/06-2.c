/* 06-2 반복문 활용
	- 중첩 반복문 : 기본 반복문을 중첩해서 사용하는 방법
	- 분기문 (break와 continue): 반복문의 실행 순서를 바꿈 , 임의로 반복을 끝내고 싶을 때 사용
	  * continue : 반복문의 일부를 건너 뛴다 = 반복문 블록을 탈출하지 않고 반복문의 일부를 제외하고 반복 가능
				   ex) 3의 배수를 빼고 1부터 100까지 합을 구할 때 효과적임
						for (i = 1; i <= 100; i++)
						{
							if((i % 3) == 0)
							{	continue; }
							sum += i;
						}
*/


#include <stdio.h>

int main()
{
	/*중첩 반복문 - 별만들기*/
	/*int i, j;		//반복 횟수를 세기 위한 제어 변수

	for (i = 0; i < 3; i++)			//i가 0부터 2까지 증가하면서 3번 반복
	{
		for (j = 0; j < 5; j++)		//j가 0부터 4까지 증가하면서 5번 반복
		{
			printf("*");			//별 출력문
		}
		printf("\n");				//별을 5번 출력한 후에 줄을 바꿔준다
	}*/

	/*break를 사용한 반복문 종료*/
	/*1~10까지 더하는데 총합이 30이되면 반복문 중단*/
	int i;
	int sum = 0;

	for ( i = 1; i <= 10; i++)					//1부터 10까지의 합을 누적할 변수
	{
		sum += i;								// i값을 sum에 누적 
		if (sum > 30) break;					// 누적한 값이 30보다 크면 반복문 종료
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	//break는 모든 반복문을 한 번에 벗어날 수 없고 가장 가까운 반복문 하나를 빠져나옴

	return 0;
}