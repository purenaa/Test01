//포인터 변수, 10_1
#include <stdio.h>

int main()
{
	double dNum, * dp;	//변수명, 포인터변수

	dNum = 7.5;
	printf("dNum: %lf, &dNum: %p \n\n", dNum, &dNum);

	dp = &dNum;
	printf("*dp : %lf, dp : %p\n", *dp, dp);

	return 0;
}