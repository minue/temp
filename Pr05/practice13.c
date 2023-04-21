/* 고전역학, 전자기학, 양자역학 성적을 입력받은 후 합격한 과목과 평균 성적을 출력하는 프로그램을 완성해 보자.
 * 단, 60점 이상을 받으면 합격이고, 합격한 과목만 평균 점수를 계산하여 소수점 아래 첫째 자리까지 출력한다.
 * 합격 조건을 판별하기 위해 삼항 연산자를 활용하자.

입력 예시:
고전역학 성적을 입력하세요: 40
전자기학 성적을 입력하세요: 65
양자역학 성적을 입력하세요: 90

출력 예시:
합격한 과목은 2 과목이며, 평균 성적은 77.5점 입니다.

 */
#include <stdio.h>

int main(void) {
	int score, pass = 0, sum = 0;
	float average = 0;

	printf("고전역학 성적을 입력하세요: ");
	scanf("%d", &score);
	sum += (score >= 60  ? score : sum);
	pass += (score >= 60  ? 1 : 0);

	printf("전자기학 성적을 입력하세요: ");
	scanf("%d", &score);
	sum += (score >= 60  ? score : sum);
	pass += (score >= 60  ? 1 : 0);

	printf("양자역학 성적을 입력하세요: ");
	scanf("%d", &score);
	sum += (score >= 60  ? score : sum);
	pass += (score >= 60  ? 1 : 0);

	average = (float)sum/pass;
	printf("합격한 과목은 %d 과목이며, 평균 성적은 %.1f점 입니다.\n", pass, average);

	return 0;
}
