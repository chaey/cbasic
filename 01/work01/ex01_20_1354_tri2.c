/*
1354 : �ﰢ�� ����ϱ� 2
���� n�� �ԷµǸ� ���ﰢ���� ����Ѵ�.

��)
n�� 5�̸�

*****
****
***
**
*
*/
#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    /*
    for( i = n ; i >= 1 ; i-- )
	{
		for( j = 1 ; j <= i ; j++ )
			printf( "*" );
		printf("\n");	
	}
    */
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=n-i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

