//������ ����, 10_1
#include <stdio.h>

int main()
{
	double dNum, * dp;	//������, �����ͺ���

	dNum = 7.5;
	printf("dNum: %lf, &dNum: %p \n\n", dNum, &dNum);

	dp = &dNum;
	printf("*dp : %lf, dp : %p\n", *dp, dp);

	return 0;
}