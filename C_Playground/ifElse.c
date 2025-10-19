#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/**
* 1�̻� 100�̸��� ���� �߿��� 7�� ����� 9�� ����� ����ϴ� ���α׷��� �ۼ��غ���.
* ��! 7�� ����̸鼭 ���ÿ� 9�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.
*/
int question_8_1_1(void) {
	int num;

	for (num = 1; num < 100; num++) {
		if (num % 7 == 0 && num % 9 == 0) {
			printf("7�� ����̸鼭 9�� ��� - %d\n", num);
		}
		else if (num % 7 == 0) {
			printf("7�� ��� - %d\n", num);
		}
		else if (num % 9 == 0) {
			printf("9�� ��� - %d\n", num);
		}
	}
	return 0;
}

/**
* �� ���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷��� �����غ���.
* ��, ������ ū ������ ���� ���� �� ����� ����ؾ� �Ѵ�.
* ���� �� �Էµ� �� ���� ������ ������� 12�� 5��� 7�� ��µǾ�� �ϰ�, �Էµ� �� ���� ������ ������� 4�� 16�̶�� 12�� ��µǾ�� �Ѵ�.
* ��, ��� ����� ������ 0 �̻��� �Ǿ�� �Ѵ�.
*/
int question_8_1_2(void) {
	int num1, num2;
	int result = 0;
	printf("�� ���� �Է�:");
	scanf("%d %d", &num1, &num2);

	if (num1 >= num2) {
		result = num1 - num2;
	}
	else {
		result = num2 - num1;
	}
	printf("������ %d", result);

	return 0;
}

/**
* �л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ�����.
* �л��� ������ 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 50�� �̻��̸� D, �׸��� �� �̸��̸� F��!
* ���α׷� ���� �� ������� ����, ����, ������ ������ �Է¹޴´�.
* �׸���� ����� ���� ���� �׿� ������ ������ ����ϸ� �ȴ�.
*/
int question_8_1_3(void) {
	int kor, eng, math;
	printf("����, ����, ���� ������ ���� �Է�");
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
* ���� ����2�� if~else���� �̿��ؼ� �ذ��Ͽ��°�?
* ��� ���·� �ذ��߰� ���� ���� �����ڸ� �̿��ϴ� ���·� ���α׷��� ������ ����.
*/
int question_8_1_4(void) {
	int num1, num2;
	int result = 0;
	printf("�� ���� �Է�:");
	scanf("%d %d", &num1, &num2);

	result = (num1 >= num2) ? num1 - num2 : num2 - num1;

	printf("������ %d", result);

	return 0;
}

/**
* �������� ����ϵ� ¦�� ��(2��, 4��, 6��, 8��)�� ����ϵ��� ����.
* ���� 2���� 2X2����, 4���� 4X4����, 6���� 6X6����, 8���� 8X8������ ��µǵ��� ���α׷��� ������ ����.
* �̷��� ������� ������ �����ϴ� ������ continue�� break���� ������ ������ ���ؼ���.
* �׷��� �������̸� continue�� break���� ����ؼ� �� ������ �ذ��ϱ� �ٶ���.
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
* ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��غ���.
*  A Z
* +Z A
* -----
*  9 9
* 
* �����, ������ ��� ���� ������ �õ��ϱ� ���ؼ��� �ݺ����� ��ø���Ѿ� �Ѵ�.
*/
int question_8_2_2(void) {
	int a, z;
	for (a = 0; a < 10; a++) {
		for (z = 0; z < 10; z++) {
			if (11* a + 11 * z == 99) {
				printf("������ �����ϴ� A�� %d, Z�� %d\n", a, z);
			}
		}
	}
	return 0;
}

int goToBasic(void) {
	int num;
	printf("�ڿ��� �Է�:");
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
		printf("1�� �Է��ϼ̽��ϴ�.\n");
		goto END;

	TWO:
		printf("2�� �Է��ϼ̽��ϴ�.\n");
		goto END;
	OTHER:
		printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̽��ϴ�.\n");
		goto END;
	END:
		return 0;

}