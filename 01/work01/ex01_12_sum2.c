/*
�ڿ��� 2���� �Է� �޾Ƽ� �� �� ������ �հ踦 ���Ͻÿ�.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int cnt ;

    printf("1���� ū �ڿ��� �Է� : ");
    scanf("%d", &n);

    cnt = ( n - 1 ) + 1 ;

    sum = ( 1 + n ) * ( cnt / 2) ;
    if (cnt % 2 == 1 ) {
        sum = sum + (( cnt / 2) + 1) ;
    }
    
    printf("�հ� : %d\n", sum) ;
    return 0;
}
