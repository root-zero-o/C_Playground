#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int notation(void) {
	int num1 = 0x47, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0x47의 10진수 정수의 값: %d\n", num1);
	printf("0x43의 10진수 정수의 값: %d\n", num2);
	printf("032의 10진수 정수의 값: %d\n", num3);
	printf("024의 10진수 정수의 값: %d\n", num4);

	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	return 0;

}

int float_error(void) {
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++) 
		num += 0.1;
	
	printf("0.1을 100번 더한 결과:%f\n", num);
	return 0;
}

int bit_and_operation(void) {
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2;

	printf("AND 연산의 결과: %d\n", num3);
	return 0;
}

int bit_or_operation(void) {
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 | num2;
	printf("OR 연산의 결과: %d\n", num3);
	return 0;
}

int bit_xor_operation(void) {
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2;
	printf("XOR 연산의 결과: %d\n", num3);
	return 0;
}

int bit_right_shift(void) {
	int num1 = -16;

	printf("2칸 오른쪽 이동의 결과:%d\n", num1 >> 2);
	printf("3칸 오른쪽 이동의 결과:%d\n", num1 >> 3);
	return 0;
}

/**
* 문제 4-4-1
* 입력 받은 정수 값의 부호를 바꿔서 출력하는 프로그램을 작성해보자.
* 예를 들어서 -3이 입력되면 3이 출력되어야 하고, 5가 입력되면 -5가 출력되어야 한다.
* 단! 반드시 이번 챕터에서 소개한 비트 연산자를 이용해서 구현해야 한다.
*/
int question_4_4_1() {
	int num1;
	scanf("%d", &num1);

	int result = ~num1 + 1;
	printf("계산 결과: %d\n", result);
	return 0;
}

/**
* 문제 4-4-2
* 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
* 단, * 연산자와 / 연산자를 사용하지 않고 구현해야 한다.
* 3 * 8 / 4
* 물론 중간과정을 생략하거나 적절히 암산하지 않고, 반드시 곱셈에 대응하는 연산과 나눗셈에 대응하는 연산을 거쳐서 해결해야 한다.
*/
int question_4_4_2() {
	int num = 3;
	
	num = num << 3;
	num = num >> 2;

	printf("계산 결과: %d\n", num);
	return 0;
}