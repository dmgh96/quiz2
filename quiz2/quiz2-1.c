#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("�� ���� ���� ����մϴ�. ���� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ���� %d�Դϴ�.\n", num1, num2, num1 + num2);

	return 0;
}