/*중첩 반복문 활용한 피라미드 만들기*/

#include <stdio.h>

int main()
{
	int i, j;
	for  (i = 1; i < 3 ; i++)
	{
		for (j = 1; j < 2; j++)
		{
			printf("   ");
		}
		for ( j = 1; j < 3; j++)
		{
			printf("*\n");
		}
	}


	return 0;
}