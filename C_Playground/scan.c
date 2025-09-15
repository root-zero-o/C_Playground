#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int simple_add_three(void) {
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf("%d", &num1);
	printf("정수 two: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
	return 0;
}

/** 프로그래밍 문제 1 */
int question_one(void) {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("뺄셈 결과: %d\n", num1 - num2);
	printf("곱셈 결과: %d\n", num1 * num2);
	return 0;
}

/** 프로그래밍 문제2 */
int question_two(void) {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int result;
	result = num1 * num2 + num3;
	printf("결과: %d", result);
	return 0;
}

/** 프로그래밍 문제3 */
int question_three(void) {
	int num1;
	scanf("%d", &num1);

	printf("%d", num1*num1);
	return 0;
}

/** 프로그래밍 문제4*/
int question_four(void) {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	int result1 = num1 / num2;
	int result2 = num1 % num2;

	printf("결과1: %d\n", result1);
	printf("결과2: %d\n", result2);
	return 0;
}

/** 프로그래밍 문제5 */
int question_five(void) {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("%d", result);
	return 0;
}