//세 개의 정수를 입력 받아서 합계와 평균을 출력하시오. (단 평균은 소수 이하를 버리고 정수부분만 출력한다)
#include <stdio.h>

int main()
{
	int x, y, z;
	int sum, average;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &x);
	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &y);
	printf("세 번째 정수를 입력하세요 : ");
	scanf("%d", &z);
	
	sum = x + y + z;
	average = sum / 3;

	printf("합 : %d\n평균 : %d\n", sum, average);

	return 0;
}