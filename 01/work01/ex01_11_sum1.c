/*
�ڿ��� 2���� �Է� �޾Ƽ� �� �� ������ �հ踦 ���Ͻÿ�.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;


    printf("1���� ū �ڿ��� �Է� : ");
    scanf("%d", &n);

    for (i=1; i<=n ; i++) {
        sum = sum + i;
    }

    printf("�հ� : %d\n", sum) ;
    return 0;
}
