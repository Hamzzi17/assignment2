#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH]; // �ִ� ���̰� MAX_LENGTH�� ���ڿ��� ������ �迭 ����
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(input, MAX_LENGTH, stdin); // ����ڷκ��� ���ڿ� �Է� ����

    // ���� ���ڸ� �����Ͽ� �Էµ� ���ڿ��� ������ ����
    input[strcspn(input, "\n")] = '\0';

    // �Էµ� ���ڿ� ����ǥ�� ��� ���
    printf("\n�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n\n", input);

    // �Էµ� ���ڿ��� ���� ���
    int length = strlen(input);
    printf("�Էµ� ���ڿ��� ���� = %d\n", length);

    return 0;
}
