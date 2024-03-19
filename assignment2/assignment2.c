#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH]; // 최대 길이가 MAX_LENGTH인 문자열을 저장할 배열 선언
    printf("문자열을 입력하세요: ");
    fgets(input, MAX_LENGTH, stdin); // 사용자로부터 문자열 입력 받음

    // 개행 문자를 제거하여 입력된 문자열의 형식을 수정
    input[strcspn(input, "\n")] = '\0';

    // 입력된 문자열 따옴표로 묶어서 출력
    printf("\n입력된 문자열은\n\"%s\"\n입니다.\n\n", input);

    // 입력된 문자열의 길이 계산
    int length = strlen(input);
    printf("입력된 문자열의 길이 = %d\n", length);

    return 0;
}
