//JUNGOL 연산자 자가진단3
//한 개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후 
//전치 증가 연산자를 사용하여 출력하는프로그램을 작성하시오.
//입력 예 : 5
//출력 예 : 5
//          7

#include <stdio.h>

int main()
{
	int a;

	printf("정수 1개를 입력하세요 \n");
	scanf("%d", &a);
	printf("%d\n", a++);
	printf("%d\n", ++a);

	return 0;
}