//�� ���� ������ �Է� �޾Ƽ� �հ�� ����� ����Ͻÿ�. (�� ����� �Ҽ� ���ϸ� ������ �����κи� ����Ѵ�)
#include <stdio.h>

int main()
{
	int x, y, z;
	int sum, average;

	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf("%d", &z);
	
	sum = x + y + z;
	average = sum / 3;

	printf("�� : %d\n��� : %d\n", sum, average);

	return 0;
}