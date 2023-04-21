/* 진법 변환 프로그램
 2 ~ 9 사이의 진법으로 표현된 네 자리 숫자를 입력받은 후 10진수로 변환하는 프로그램을 완성해 보자.
 */
#include <stdio.h>

int main(void) {
	int base, input, decimal = 0;

	printf("네 자리 수를 입력하세요: ");
	scanf("%d", &input);
	printf("어떤 진법인지 입력하세요: ");
	scanf("%d", &base);

	decimal += (input/1000)*base*base*base;
	decimal += ((input%1000)/100)*base*base;
	decimal += ((input%100)/10)*base;
	decimal += input%10;

	printf("%d(%d)를 10진수로 변환하면 %d입니다.\n", input, base, decimal);

	return 0;
}
