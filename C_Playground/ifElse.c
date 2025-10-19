#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/**
* 1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을 작성해보자.
* 단! 7의 배수이면서 동시에 9의 배수인 정수는 한번만 출력해야 한다.
*/
int question_8_1_1(void) {
	int num;

	for (num = 1; num < 100; num++) {
		if (num % 7 == 0 && num % 9 == 0) {
			printf("7의 배수이면서 9의 배수 - %d\n", num);
		}
		else if (num % 7 == 0) {
			printf("7의 배수 - %d\n", num);
		}
		else if (num % 9 == 0) {
			printf("9의 배수 - %d\n", num);
		}
	}
	return 0;
}

/**
* 두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해보자.
* 단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다.
* 예를 들어서 입력된 두 수가 순서에 상관없이 12와 5라면 7이 출력되어야 하고, 입력된 두 수가 순서에 상관없이 4와 16이라면 12가 출력되어야 한다.
* 즉, 출력 결과는 무조건 0 이상이 되어야 한다.
*/
int question_8_1_2(void) {
	int num1, num2;
	int result = 0;
	printf("두 정수 입력:");
	scanf("%d %d", &num1, &num2);

	if (num1 >= num2) {
		result = num1 - num2;
	}
	else {
		result = num2 - num1;
	}
	printf("정답은 %d", result);

	return 0;
}

/**
* 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
* 학생의 성적이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D, 그리고 그 미만이면 F다!
* 프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력받는다.
* 그리고는 평균을 구한 다음 그에 적절한 학점을 출력하면 된다.
*/
int question_8_1_3(void) {
	int kor, eng, math;
	printf("국어, 영어, 수학 순으로 점수 입력");
	scanf("%d %d %d", &kor, &eng, &math);

	int average = (kor + eng + math) / 3;

	if (average >= 90) {
		printf("A");
	}
	else if (average >= 80) {
		printf("B");
	}
	else if(average >= 70) {
		printf("C");
	}
	else if (average >= 50) {
		printf("D");
	}
	else {
		printf("F");
	}

	return 0;
}

/**
* 위의 문제2를 if~else문을 이용해서 해결하였는가?
* 어떠한 형태로 해결했건 간에 조건 연산자를 이용하는 형태로 프로그램을 변경해 보자.
*/
int question_8_1_4(void) {
	int num1, num2;
	int result = 0;
	printf("두 정수 입력:");
	scanf("%d %d", &num1, &num2);

	result = (num1 >= num2) ? num1 - num2 : num2 - num1;

	printf("정답은 %d", result);

	return 0;
}

/**
* 구구단을 출력하되 짝수 단(2단, 4단, 6단, 8단)만 출력하도록 하자.
* 또한 2단은 2X2까지, 4단은 4X4까지, 6단은 6X6까지, 8단은 8X8까지만 출력되도록 프로그램을 구현해 보자.
* 이렇게 어수선한 문제를 제시하는 이유는 continue와 break문의 사용법을 익히기 위해서다.
* 그러니 가급적이면 continue와 break문을 사용해서 이 문제를 해결하기 바란다.
*/
int question_8_2_1(void) {
	int left;

	for (left = 2; left < 10; left++) {
		if (left % 2 != 0) {
			continue;
		}

		int right;
		for (right = 1; right < 10; right++) {
			if (right > left) {
				break;
			}
			printf("%d X %d = %d\n", left, right, left * right);
		}
	}
	return 0;
}

/**
* 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자.
*  A Z
* +Z A
* -----
*  9 9
* 
* 참고로, 가능한 모든 수의 조합을 시도하기 위해서는 반복문을 중첩시켜야 한다.
*/
int question_8_2_2(void) {
	int a, z;
	for (a = 0; a < 10; a++) {
		for (z = 0; z < 10; z++) {
			if (11* a + 11 * z == 99) {
				printf("조건을 만족하는 A는 %d, Z는 %d\n", a, z);
			}
		}
	}
	return 0;
}

int goToBasic(void) {
	int num;
	printf("자연수 입력:");
	scanf("%d", &num);

	if (num == 1) {
		goto ONE;
	}
	else if (num == 2) {
		goto TWO;
	}
	else {
		goto OTHER;
	}

	ONE:	
		printf("1을 입력하셨습니다.\n");
		goto END;

	TWO:
		printf("2를 입력하셨습니다.\n");
		goto END;
	OTHER:
		printf("3 혹은 다른 값을 입력하셨습니다.\n");
		goto END;
	END:
		return 0;

}