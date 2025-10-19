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
* ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello world!"�� ����ϴ� ���α׷��� �ۼ��غ���.
*/
int question_7_1_1(void) {
	int num;
	printf("���� ���� �ϳ� �Է�: \n");
	scanf("%d", &num);
	printf("�Է��� ����: %d \n", num);

	int count = 0;
	while (count < num) {
		printf("Hello World!");
		count++;
	}

	return  0;
}

/**
* ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ 3�� ����� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� 5�� �Է� �޾Ҵٸ�, 3 6 9 12 15�� ����ؾ� �Ѵ�.
*/
int question_7_1_2(void) {
	int num;
	printf("���� ���� �ϳ� �Է�: \n");
	scanf("%d", &num);

	int count =1;
	while (count < num + 1) {
		printf("%d", count * 3);
		count++;
	}

	return 0;
}

/**
* ���α׷� ����ڷκ��� ����ؼ� ������ �Է¹޴´�.
* �׸��� �� ���� ����ؼ� ���� ������.
* �̷��� �۾��� ���α׷� ����ڰ� 0�� �Է��� ������ ��ӵǾ�� �ϸ�,
* 0�� �ԷµǸ� �Էµ� ��� ������ ���� ����ϰ� ���α׷��� �����Ų��.
*/
int question_7_1_3(void) {
	int total = 0;
	
	int num = 1;
	while (num != 0) {
		printf("���� �Է� :");
		scanf("%d", &num);
		total = total + num;
	}
	printf("total: %d\n", total);
	return 0;
}

/**
* ���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�, �������� ����ϴ� ���α׷��� �ۼ��غ���
*/
int question_7_1_4(void) {
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	int count = 9;
	while (count > 0) {
		printf("%d X %d = %d \n", num, count, num * count);
		count -= 1;
	}
	return 0;
}


/**
* ���α׷� ����ڷκ��� �Է� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��ϵ� ���� �� ���� ������ �������Ѿ� �Ѵ�.
* "���� �� ���� ������ �Է��� ������ ���α׷� ����ڿ��� ���´�. �׸��� �� ����ŭ ������ �Է¹޴´�."
* "��� ���� �Ҽ��� ���ϱ��� ����ؼ� ����Ѵ�."
*/
int question_7_1_5(void) {
	int num;
	printf("��� �Է��ұ��?");
	scanf("%d", &num);
	int count = num;

	int total = 0;

	while (count > 0) {
		int input;
		printf("���ڸ� �Է��ϼ���:");
		scanf("%d", &input);

		total += input;
		count -= 1;
	}

	printf("��� : %f", (double)total / num);
	return 0;
}

/**
* ���α׷� ����ڷκ��� �� 5���� ������ �Է¹޾Ƽ�, �� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
* ��! �� ���� ������ �ִ�.
* ������ �ݵ�� 1 �̻��̾�� �Ѵ�.
* ���࿡ 1�̸��� ���� �ԷµǴ� ��쿡��, �̸� �̓����� �������� �ʰ� ���Է��� �䱸�ؾ� �Ѵ�.
* �׷��� �ᱹ 1�̻��� ���� 5���� ��� �Է¹��� �� �ֵ��� ���α׷��� �ϼ��ؾ� �Ѵ�.
*/
int question_7_2_1(void) {

	int count = 5;
	int total = 0;
	while (count > 0) {
		int num;
		printf("������ �Է��ϼ���:");
		scanf("%d", &num);

		while (num < 1) {
			printf("������ �ٽ� �Է��ϼ���. 1 �̻� �Է� ����");
			scanf("%d", &num);
		}

		total += num;
		count -= 1;
	}

	printf("��: %d", total);
	return 0;
}

/**
* �Ʒ� ����� ���̴� ���α׷��� �ۼ��غ���.
* *
* o *
* o o *
* o o o *
* o o o o *
* 
* �����, �� 5�࿡ ���ļ� ����� �̷�����, ���� ������ ������ o ������ ���� �����Ѵٴ� Ư¡�� ������� while���� ��ø�� �����ϸ� �ȴ�.
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
* ���� UsefulDoWhile.c�� while�� ������� �籸���� ���, �����غ� �� �ִ� ������ ���´� �� �����̴�.
* �� �ΰ��� ����� ������ ����.
* ��� 1 : ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù ��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.
* ��� 2 : while���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է¹ް� �Ѵ�.
* 
* �� �� ���� ����� ���� �����ؼ� ���� UserfulDoWhile.c�� while�� ������� �� ������ ����.
* ����� � ����̵� do~while���� �������� �����ٴ� ���ڿ������ٴ� ������ �� ���̴�.
*/
int question_7_3_1(void) {
	int total = 0, num = 0;

	printf("���� �Է�:");
	scanf("%d", &num);

	total += num;

	while (num != 0) {
		printf("���� �ٽ� �Է�:");
		scanf("%d", &num);
		total += num;
	}

	printf("�հ�: %d", total);
	return 0;
}

/**
* 0�̻� 100 ������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷��� �����ϵ�, do~while�� ������� �����غ���.
* ����� ������ ����� 2550�� �Ǿ�� �Ѵ�.
*/
int question_7_3_2(void) {
	int count = 0;
	int total = 0;
	do {
		total += count * 2;
		count += 1;
	} while (count < 51);

	printf("�հ�: %d", total);
	return 0;
}

/**
* while���� ��ø���� ���� TwoToNine.c�� do~while���� ��ø������� �籸���غ���.
* do~while���� ��ø�� ���ؼ��� ������ ����� ��������, while���� ��ø�� �����Ͽ�����, ����� ������ �����ϴ�.
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
* ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ�, �� ������ �����Ͽ� �� ���̿� �����ϴ� �������� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� 3�� 5�� �ԷµǸ�, 3+4+5�� ����� ��µǾ�� �Ѵ�.
* �׸��� ������ ���� ������ �ϱ� ���ؼ�, ù ��° �ԷµǴ� �������� �� ��° �ԷµǴ� ������ �� Ŀ�� �Ѵٴ� ������ �ɱ�� �ϰڴ�.
*/
int question_7_4_1(void) {
	int num1;
	int num2;

	printf("���� 2�� �Է�:");
	scanf("%d %d", &num1, &num2);

	int gap = num2 - num1;
	int total = 0;
	for (; gap >= 0; gap--) {
		total += num1 + gap;
	}
	printf("������ %d", total);
	return 0;
}

/**
* ���� ������ ���(factorial)�� ����ϴ� ���α׷��� �ۼ��غ���.
* n! = 1 * 2 * 3 * ... * n
* ���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է¹޴´�.
* �׷��� n�� ��� n!�� ����ؼ� ����� �̷����� �Ѵ�.
*/
int question_7_4_2(void) {
	int num;
	printf("���� �ϳ� �Է�:");
	scanf("%d", &num);

	int total = 1;
	int start;
	for (start = 1; start <= num; start++) {
		total *= start;
	}
	printf("������ %d", total);
	return 0;
}