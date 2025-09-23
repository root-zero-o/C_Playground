#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int notation(void) {
	int num1 = 0x47, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0x47�� 10���� ������ ��: %d\n", num1);
	printf("0x43�� 10���� ������ ��: %d\n", num2);
	printf("032�� 10���� ������ ��: %d\n", num3);
	printf("024�� 10���� ������ ��: %d\n", num4);

	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	return 0;

}

int float_error(void) {
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++) 
		num += 0.1;
	
	printf("0.1�� 100�� ���� ���:%f\n", num);
	return 0;
}

int bit_and_operation(void) {
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2;

	printf("AND ������ ���: %d\n", num3);
	return 0;
}

int bit_or_operation(void) {
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 | num2;
	printf("OR ������ ���: %d\n", num3);
	return 0;
}

int bit_xor_operation(void) {
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2;
	printf("XOR ������ ���: %d\n", num3);
	return 0;
}

int bit_right_shift(void) {
	int num1 = -16;

	printf("2ĭ ������ �̵��� ���:%d\n", num1 >> 2);
	printf("3ĭ ������ �̵��� ���:%d\n", num1 >> 3);
	return 0;
}

/**
* ���� 4-4-1
* �Է� ���� ���� ���� ��ȣ�� �ٲ㼭 ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� -3�� �ԷµǸ� 3�� ��µǾ�� �ϰ�, 5�� �ԷµǸ� -5�� ��µǾ�� �Ѵ�.
* ��! �ݵ�� �̹� é�Ϳ��� �Ұ��� ��Ʈ �����ڸ� �̿��ؼ� �����ؾ� �Ѵ�.
*/
int question_4_4_1() {
	int num1;
	scanf("%d", &num1);

	int result = ~num1 + 1;
	printf("��� ���: %d\n", result);
	return 0;
}

/**
* ���� 4-4-2
* ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
* ��, * �����ڿ� / �����ڸ� ������� �ʰ� �����ؾ� �Ѵ�.
* 3 * 8 / 4
* ���� �߰������� �����ϰų� ������ �ϻ����� �ʰ�, �ݵ�� ������ �����ϴ� ����� �������� �����ϴ� ������ ���ļ� �ذ��ؾ� �Ѵ�.
*/
int question_4_4_2() {
	int num = 3;
	
	num = num << 3;
	num = num >> 2;

	printf("��� ���: %d\n", num);
	return 0;
}