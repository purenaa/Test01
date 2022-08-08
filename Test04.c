//JUNGOL 출력 자가진단5
//다음과 같이 출력되는 프로그램을 작성하라.
//My height
//170
//My weight
//68.600000

#include <Stdio.h>

int main()
{
	int a;
	double b;
	a = 170;
	b = 68.6;

	printf("My height\n");
	printf("%d\n", a);							//scanf("%d", &a);
	printf("My weight\n");
	printf("%.6lf\n", b);						//scanf("%lf", &b);

	return 0;
}