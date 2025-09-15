#include <stdio.h>

int operator_example(void) {
	int num; // num이라는 이름의 변수 선언
	num = 10; // 변수 num에 10 저장
	printf("%d", num); // 변수 num의 값 참조

	int num2 = 12; // 선언과 동시에 초기화
	int num3 = 30, num4 = 40; // 한 줄에 여러 개 선언 및 초기화
	printf("%d %d", num3, num4); // 여러 변수 참조
	return 0;
}

/** 변수 선언 & 초기화*/
int var_decl_and_init(void) {
	int num1=0, num2=0;
	int num3 = 30, num4 = 40;

	printf("num1: %d, num2: %d \n", num1, num2);
	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	return 0;
}

/** 덧셈 함수 */
int simple_add_one(void) {
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과ㅣ %d \n", result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);
	return 0;
}

/** 증가, 감소 연산자*/
int operator_four(void) {
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d\n", num1);
	printf("num1++: %d\n", num1++); // 후위 증가(선 연산, 후 증가)
	printf("num1: %d\n\n", num1);

	printf("num2: %d\n", num2);
	printf("++num2: % d\n", ++num2); // 전위 증가(선 증가, 후 연산)
	printf("num2: %d\n", num2);
	return 0;
}

/** 콤마 연산자*/
int comma_op(void) {
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world!\n");
	num1++, num2++;
	printf("num1: %d", num1), printf("%d", num2), printf("\n");
	return 0;
}