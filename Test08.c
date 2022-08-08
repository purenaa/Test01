//JUNGOL 선택제어문 자가진단8
//4.5 이하의 평점을 입력받아 그 값에 따라 다음과 같이 출력하는 프로그램을 작성하시오.
//단 입력는 0이상 4.5 이하이다.
//4.0 이상 : "scholarship"
//3.0 이상 : "next semester"
//2.0 이상 : "seasonal semester"
//2.0 미만 : "retake"​

#include <stdio.h>

int main()
{
	float score;
	do {
		printf("점수 ? ");
		scanf("%f", &score);
	} while (score > 4.5 || score <= 0 );

	switch ((int)score)
	{
	case 4:
		printf("scholarship\n");
		break;
	case 3:
		printf("next semester\n");
		break;
	case 2:
		printf("seasonal semester\n");
		break;
	case 1:
		printf("retake\n");
		break;
	}

	return 0;
}