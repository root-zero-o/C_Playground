#include <stdio.h>

int operator_example(void) {
	int num; // num�̶�� �̸��� ���� ����
	num = 10; // ���� num�� 10 ����
	printf("%d", num); // ���� num�� �� ����

	int num2 = 12; // ����� ���ÿ� �ʱ�ȭ
	int num3 = 30, num4 = 40; // �� �ٿ� ���� �� ���� �� �ʱ�ȭ
	printf("%d %d", num3, num4); // ���� ���� ����
	return 0;
}

/** ���� ���� & �ʱ�ȭ*/
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

/** ���� �Լ� */
int simple_add_one(void) {
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("���� ����� %d \n", result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d��(��) %d�� ���� %d�Դϴ�. \n", num1, num2, result);
	return 0;
}

/** ����, ���� ������*/
int operator_four(void) {
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d\n", num1);
	printf("num1++: %d\n", num1++); // ���� ����(�� ����, �� ����)
	printf("num1: %d\n\n", num1);

	printf("num2: %d\n", num2);
	printf("++num2: % d\n", ++num2); // ���� ����(�� ����, �� ����)
	printf("num2: %d\n", num2);
	return 0;
}

/** �޸� ������*/
int comma_op(void) {
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world!\n");
	num1++, num2++;
	printf("num1: %d", num1), printf("%d", num2), printf("\n");
	return 0;
}