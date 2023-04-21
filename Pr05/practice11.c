/* 5개의 정수를 입력 받은 후 그 중에서 양수는 몇 개인지 출력하는 프로그램을 작성해 보자. */
#include <stdio.h>

int main(void) {
	int input, count = 0;

	scanf("%d", &input);
	input > 0 && count++;

	scanf("%d", &input);
	input > 0 && count++;

	scanf("%d", &input);
	input > 0 && count++;

	scanf("%d", &input);
	input > 0 && count++;

	scanf("%d", &input);
	input > 0 && count++;

	printf("입력한 정수 중에서 양수는 %d개 입니다.\n", count);
	return 0;
}
