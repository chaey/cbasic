/*
1367 : ����纯�� ����ϱ� 1
����纯���� ���� n�� �־�����.
�� ���� �밢������ �̷������ ����纯���� ����Ѵ�.
��,������ ���� ���� �ִ�.

*/
#include <stdio.h>

int main() {
    int n, i, j, mid;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
    	for (j=1; j<=n-i; j++) printf(" ");
    	for (j=1; j<=n; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}

