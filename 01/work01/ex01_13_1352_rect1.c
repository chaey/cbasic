/*
1352 : �簢�� ����ϱ� 1
���� n�� �ԷµǸ� ���̰� n�� �簢���� ����Ͻÿ�.
��, �簢���� * ������� ä���.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
