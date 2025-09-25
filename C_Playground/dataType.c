#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int size_of_operator(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d \n", sizeof(ch));
	printf("���� inum�� ũ��: %d\n", sizeof(inum));
	printf("���� dnum�� ũ��: %d\n", sizeof(dnum));

	printf("char�� ũ��: %d\n", sizeof(char));
	printf("int�� ũ��: %d\n", sizeof(int));
	printf("long�� ũ��: %d\n", sizeof(long));
	printf("long long�� ũ��: %d\n", sizeof(long long));
	printf("float�� ũ��: %d\n", sizeof(float));
	printf("double�� ũ��: %d\n", sizeof(double));
	return 0;
}

/** ���� 5-1-1 
* ���α׷� ����ڷκ��� �� ���� x, y ��ǥ�� �Է¹޾Ƽ�, �� ���� �̷�� ���簢���� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
* ��, �� ����� x, y ��ǥ ���� �� �ϴ��� x, y ��ǥ ������ �۴ٰ� �����ϰ�,
* �� ����� ��ǥ ������ ���� �Է¹޴� ���·� ������ �ۼ��غ���.
* ������ �� �ִ� ������ ���� ������ ����.
* �� �ϴ��� x, y ��ǥ: 2 4
* �� �ϴ��� x, y ��ǥ: 4 8
* �� ���� �̷�� ���簢���� ���̴� 8�Դϴ�.
*/
int question5_1_1(void) {
	int leftx, lefty, rightx, righty;
	printf("left : \n");
	scanf("%d %d", &leftx, &lefty);
	printf("right:\n");
	scanf("%d %d", &rightx, &righty);

	int result = (rightx - leftx) * (righty - lefty);
	printf("���: %d", result);
	return 0;
}

/** ���� 5-1-2
* ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ� double �� ������ ��������.
* �׸��� �� ���� ��Ģ���� ����� ����غ���.
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

/** ���� 5-1-4
* ���α׷� ����ڷκ��� �ƽ�Ű �ڵ� ���� ������ ���·� �Է� ���� �Ŀ� �ش� ������ �ƽ�Ű �ڵ� ���ڸ� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� ���α׷� ����ڰ� ���� A�� �Է��ϸ� ���� 65�� ����ؾ� �Ѵ�.
*/
int question5_1_4(void) {
	int numchar;
	printf("���� �Է�: \n");
	scanf("%d", &numchar);
	printf("���: %c", numchar);
	return 0;
}

int auto_conv_one(void) {
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("���� 245�� �Ǽ���: %f\n", num1);
	printf("�Ǽ� 3.1415�� ������: %d\n", num2);
	printf("ū ���� 129�� ���� ������: %d\n", ch);
	return 0;
}