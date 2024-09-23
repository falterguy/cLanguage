#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
void main() {

	//char ch = 'b'; //아스키코드표
	//short s = 10; //10진수 정수
	//int i = 100; //10진수 정수
	//long l = 2323; //10진수 정수

	//float f = 2.34; //10진수 실수
	//double d = 3142.23; //10진수 실수

	//bool b = true;
	// 서식 문자
	// %d - 10진수 정수
	// %c - 문자
	// %d - 10진수 문자 , %lf 
	// %s - 문자열
	// %p - 포인터 값

	// 출력 - printf, 입력 - scanf
	// 입력 하는 방법
	//int num1, num2;

	//printf("두정수를 입력하세요");
	//scanf_s("%d", &num1); // 정수하나만입력 받을거라면 공백X, _s 넣으면 define 안넣어도됨, _s는 숫자만 가능
	//scanf_s("%d", &num2);

	/*scanf_s("%d %d", &num1, &num2);
	printf("%d %d \n", num1, num2);




	printf("%d %c", 10, 'a');


	printf("잘 되고있나?");*/

	//국어, 수학, 영어 점수 입력 하고 총점과 평균을 구하여 출력

	int num1, num2, num3;
	int total, avg;

	printf("국어:");
	scanf_s("%d", &num1);
	printf("수학:");
	scanf_s("%d", &num2);
	printf("영어:");
	scanf_s("%d", &num3);

	total = num1 + num2 + num3;
	avg = total / 3;
	printf("총점 :%d, 평균 : %d \n", total, avg);
}
