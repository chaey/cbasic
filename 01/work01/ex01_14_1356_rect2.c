/*
1352 : �簢�� ����ϱ� 2
���� n�� �ԷµǸ� ���̰� n�� �簢���� ����Ͻÿ�.
��, �簢�� �׵θ���  * ������� ä���.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if ( i==1 || i==n || j==1|| j==n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
