#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
void main() {

	//char ch = 'b'; //�ƽ�Ű�ڵ�ǥ
	//short s = 10; //10���� ����
	//int i = 100; //10���� ����
	//long l = 2323; //10���� ����

	//float f = 2.34; //10���� �Ǽ�
	//double d = 3142.23; //10���� �Ǽ�

	//bool b = true;
	// ���� ����
	// %d - 10���� ����
	// %c - ����
	// %d - 10���� ���� , %lf 
	// %s - ���ڿ�
	// %p - ������ ��

	// ��� - printf, �Է� - scanf
	// �Է� �ϴ� ���
	//int num1, num2;

	//printf("�������� �Է��ϼ���");
	//scanf_s("%d", &num1); // �����ϳ����Է� �����Ŷ�� ����X, _s ������ define �ȳ־��, _s�� ���ڸ� ����
	//scanf_s("%d", &num2);

	/*scanf_s("%d %d", &num1, &num2);
	printf("%d %d \n", num1, num2);




	printf("%d %c", 10, 'a');


	printf("�� �ǰ��ֳ�?");*/

	//����, ����, ���� ���� �Է� �ϰ� ������ ����� ���Ͽ� ���

	int num1, num2, num3;
	int total, avg;

	printf("����:");
	scanf_s("%d", &num1);
	printf("����:");
	scanf_s("%d", &num2);
	printf("����:");
	scanf_s("%d", &num3);

	total = num1 + num2 + num3;
	avg = total / 3;
	printf("���� :%d, ��� : %d \n", total, avg);
}
