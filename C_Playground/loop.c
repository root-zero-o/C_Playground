#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int simple_while(void) {
	int num = 0;

	while (num < 5) {
		printf("Hello world! %d\n", num);
		num++;
	}

	return 0;
}

/** 
* 프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello world!"를 출력하는 프로그램을 작성해보자.
*/
int question_7_1_1(void) {
	int num;
	printf("양의 정수 하나 입력: \n");
	scanf("%d", &num);
	printf("입력한 정수: %d \n", num);

	int count = 0;
	while (count < num) {
		printf("Hello World!");
		count++;
	}

	return  0;
}

/**
* 프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자.
* 예를 들어서 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.
*/
int question_7_1_2(void) {
	int num;
	printf("양의 정수 하나 입력: \n");
	scanf("%d", &num);

	int count =1;
	while (count < num + 1) {
		printf("%d", count * 3);
		count++;
	}

	return 0;
}

/**
* 프로그램 사용자로부터 계속해서 정수를 입력받는다.
* 그리고 그 값을 계속해서 더해 나간다.
* 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며,
* 0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다.
*/
int question_7_1_3(void) {
	int total = 0;
	
	int num = 1;
	while (num != 0) {
		printf("정수 입력 :");
		scanf("%d", &num);
		total = total + num;
	}
	printf("total: %d\n", total);
	return 0;
}

/**
* 프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을 작성해보자
*/
int question_7_1_4(void) {
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	int count = 9;
	while (count > 0) {
		printf("%d X %d = %d \n", num, count, num * count);
		count -= 1;
	}
	return 0;
}


/**
* 프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 다음 두 가지 조건을 만족시켜야 한다.
* "먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력받는다."
* "평균 값은 소수점 이하까지 계산해서 출력한다."
*/
int question_7_1_5(void) {
	int num;
	printf("몇개를 입력할까용?");
	scanf("%d", &num);
	int count = num;

	int total = 0;

	while (count > 0) {
		int input;
		printf("숫자를 입력하세용:");
		scanf("%d", &input);

		total += input;
		count -= 1;
	}

	printf("평균 : %f", (double)total / num);
	return 0;
}

/**
* 프로그램 사용자로부터 총 5개의 정수를 입력받아서, 그 수의 합을 출력하는 프로그램을 작성해보자.
* 단! 한 가지 조건이 있다.
* 정수는 반드시 1 이상이어야 한다.
* 만약에 1미만의 수가 입력되는 경우에는, 이를 이볅으로 인정하지 않고 재입력을 요구해야 한다.
* 그래서 결국 1이상의 정수 5개를 모두 입력받을 수 있도록 프로그램을 완성해야 한다.
*/
int question_7_2_1(void) {

	int count = 5;
	int total = 0;
	while (count > 0) {
		int num;
		printf("정수를 입력하세요:");
		scanf("%d", &num);

		while (num < 1) {
			printf("정수를 다시 입력하세요. 1 이상만 입력 가능");
			scanf("%d", &num);
		}

		total += num;
		count -= 1;
	}

	printf("합: %d", total);
	return 0;
}

/**
* 아래 출력을 보이는 프로그램을 작성해보자.
* *
* o *
* o o *
* o o o *
* o o o o *
* 
* 참고로, 총 5행에 걸쳐서 출력이 이뤄지고, 행이 더해질 때마다 o 문자의 수가 증가한다는 특징을 기반으로 while문의 중첩을 구성하면 된다.
*/
int question_7_2_2(void) {
	int count = 1;

	while (count < 6 ) {
		int count2 = count - 1;

		while (count2 > 0) {
			printf("o ");
			count2 -= 1;
		}
		printf("*\n");
		count += 1;
	}

	return 0;
}

/**
* 예제 UsefulDoWhile.c를 while문 기반으로 재구현할 경우, 생각해볼 수 있는 구현의 형태는 두 가지이다.
* 그 두가지 방법은 다음과 같다.
* 방법 1 : 변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.
* 방법 2 : while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력받게 한다.
* 
* 이 두 가지 방법을 각각 적용해서 예제 UserfulDoWhile.c를 while문 기반으로 재 구현해 보자.
* 참고로 어떤 방법이든 do~while문을 적용했을 때보다는 부자연스럽다는 느낌이 들 것이다.
*/
int question_7_3_1(void) {
	int total = 0, num = 0;

	printf("정수 입력:");
	scanf("%d", &num);

	total += num;

	while (num != 0) {
		printf("정수 다시 입력:");
		scanf("%d", &num);
		total += num;
	}

	printf("합계: %d", total);
	return 0;
}

/**
* 0이상 100 이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do~while문 기반으로 구현해보자.
* 참고로 덧셈의 결과는 2550이 되어야 한다.
*/
int question_7_3_2(void) {
	int count = 0;
	int total = 0;
	do {
		total += count * 2;
		count += 1;
	} while (count < 51);

	printf("합계: %d", total);
	return 0;
}

/**
* while문의 중첩관련 예제 TwoToNine.c를 do~while문의 중첩기반으로 재구현해보자.
* do~while문의 중첩에 대해서는 별도의 언급이 없었지만, while문의 중첩을 이해하였으니, 충분히 응용이 가능하다.
*/
int question_7_3_3(void) {
	int cur = 2;
	int is = 0;

	do {
		is = 1;
		do {
			printf("%d X %d = %d\n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
		printf("\n");
	} while (cur < 10);
	return 0;
}

/**
* 프로그램 사용자로부터 두 개의 정수를 입력 받아서, 두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서 출력하는 프로그램을 작성해보자.
* 예를 들어서 3과 5가 입력되면, 3+4+5의 결과가 출력되어야 한다.
* 그리고 문제를 조금 간단히 하기 위해서, 첫 번째 입력되는 정수보다 두 번째 입력되는 정수가 더 커야 한다는 조건을 걸기로 하겠다.
*/
int question_7_4_1(void) {
	int num1;
	int num2;

	printf("정수 2개 입력:");
	scanf("%d %d", &num1, &num2);

	int gap = num2 - num1;
	int total = 0;
	for (; gap >= 0; gap--) {
		total += num1 + gap;
	}
	printf("정답은 %d", total);
	return 0;
}

/**
* 다음 수식은 계승(factorial)을 계산하는 프로그램을 작성해보자.
* n! = 1 * 2 * 3 * ... * n
* 프로그램 사용자로부터 n에 해당하는 정수를 입력받는다.
* 그러면 n의 계승 n!를 계산해서 출력이 이뤄져야 한다.
*/
int question_7_4_2(void) {
	int num;
	printf("정수 하나 입력:");
	scanf("%d", &num);

	int total = 1;
	int start;
	for (start = 1; start <= num; start++) {
		total *= start;
	}
	printf("정답은 %d", total);
	return 0;
}