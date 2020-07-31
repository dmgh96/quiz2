#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("두 수의 합을 출력합니다. 수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d의 합은 %d입니다.\n", num1, num2, num1 + num2);

	return 0;
}