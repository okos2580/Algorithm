/*
이름:김태정
학번:202210423
교수님: 송해상 교수님
프로그램 명:money.c
프로그램 날짜:2023.3.31
프로그램 설명: 동전 거스름돈 프로그램
*/
#include <stdio.h>
int main() {
	int change, i, count[4]; // 거스름돈의 필요한 정수형 변수들 선언
	int coin[4] = { 500,100,50,10 }; // 거스를 동전의 종류
	printf("거스름돈을 입력하시오.\n"); 
	scanf_s("%d", &change); // 거스름돈 입력

	for (i = 0; i < 4; i++) { // 거스름돈에 대하여 동전의 종류별 개수 구하기
		count[i] = change / coin[i];
		change = change % coin[i];
		printf("%d원 동전 = %d개\n", coin[i], count[i]);
	}
	return 0;
}