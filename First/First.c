//변수 또는 값 앞에 변환할 자료형을 (괄호) 안에 명기
#include <stdio.h>
int main()
{
	int num1 = 32;
	int num2 = 7;
	float num3;

	num3 = num1 / num2;
	printf("%f\n", num3);
	num3 = (float)num1 / num2;
	printf("%f\n", num3);
}