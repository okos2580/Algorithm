/*
이름: 김태정
날짜: 2023.03.31
학번: 202210423
교수님: 송해상 교수님
프로그램 설명: 최대값 찾기 프로그램
소스 코드 이름: FindMaxScore.c
*/
#include <stdio.h>
int main() {

	int arr[10]; // 10크기의 정수 배열 선언
	int max, i;  // 최대값을 저장을 정수형 변수 선언

	for (i = 0; i < 10; i++) { // 배열의 크기만큼 반복
		printf("숫자 입력\n");
		scanf_s("%d", &arr[i]); // 배열을 하나씩 입력
	}
	max = arr[0]; // 배열의 맨처음 값을	max에 저장

	for (i = 0; i < 10; i++) { // 배열의 크기만큼 반복
		if (max < arr[i])  // max가 배열의 i번째 값보다 작다면
			max = arr[i];  // max는 i번째 값이 된다.
	}
	printf("최댓값은 %d입니다.\n", max); //max값 출력
	return 0;
}