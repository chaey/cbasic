/*
1357 : �ﰢ�� ����ϱ� 4
n�� �ԷµǸ� ���� �ﰢ���� ����Ͻÿ�.

��) n = 4

*
**
***
****
***
**
*
*/
#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    
    for(i=n-1; i>=1; i--) {
        for (j=1; j<=i; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    
    return 0;
}
