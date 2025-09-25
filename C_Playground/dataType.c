#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int size_of_operator(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d\n", sizeof(inum));
	printf("변수 dnum의 크기: %d\n", sizeof(dnum));

	printf("char의 크기: %d\n", sizeof(char));
	printf("int의 크기: %d\n", sizeof(int));
	printf("long의 크기: %d\n", sizeof(long));
	printf("long long의 크기: %d\n", sizeof(long long));
	printf("float의 크기: %d\n", sizeof(float));
	printf("double의 크기: %d\n", sizeof(double));
	return 0;
}

/** 문제 5-1-1 
* 프로그램 사용자로부터 두 점의 x, y 좌표를 입력받아서, 두 점이 이루는 직사각형의 넓이를 계산하여 출력하는 프로그램을 작성해보자.
* 단, 좌 상단의 x, y 좌표 값이 우 하단의 x, y 좌표 값보다 작다고 가정하고,
* 좌 상단의 좌표 정보를 먼저 입력받는 형태로 예제를 작성해보자.
* 참고할 수 있는 실행의 예는 다음과 같다.
* 좌 하단의 x, y 좌표: 2 4
* 우 하단의 x, y 좌표: 4 8
* 두 점이 이루는 직사각형의 넓이는 8입니다.
*/
int question5_1_1(void) {
	int leftx, lefty, rightx, righty;
	printf("left : \n");
	scanf("%d %d", &leftx, &lefty);
	printf("right:\n");
	scanf("%d %d", &rightx, &righty);

	int result = (rightx - leftx) * (righty - lefty);
	printf("결과: %d", result);
	return 0;
}

/** 문제 5-1-2
* 프로그램 사용자로부터 두 개의 실수를 입력 받아서 double 형 변수에 저장하자.
* 그리고 두 수의 사칙연산 결과를 출력해보자.
*/
int question5_1_2(void) {
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("num1 + num2 = %lf", num1 + num2);
	printf("num1 - num2 = %lf", num1 - num2);
	printf("num1 * num2 = %lf", num1 * num2);
	printf("num1 / num2 = %lf", num1 / num2);
	return 0;
}

/** 문제 5-1-4
* 프로그램 사용자로부터 아스키 코드 값을 정수의 형태로 입력 받은 후에 해당 정수의 아스키 코드 문자를 출력하는 프로그램을 작성해보자.
* 예를 들어서 프로그램 사용자가 문자 A를 입력하면 정수 65를 출력해야 한다.
*/
int question5_1_4(void) {
	int numchar;
	printf("정수 입력: \n");
	scanf("%d", &numchar);
	printf("결과: %c", numchar);
	return 0;
}

int auto_conv_one(void) {
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f\n", num1);
	printf("실수 3.1415를 정수로: %d\n", num2);
	printf("큰 정수 129를 작은 정수로: %d\n", ch);
	return 0;
}