/*
1358 : �ﰢ�� ����ϱ� 5
� �� n�� �Է¹����� ������ ���� �ﰢ���� ����Ѵ�.

���⼭ �ԷµǴ� n�� �ݵ�� Ȧ���̴�.
*/
#include <stdio.h>

int main() {
    int n, i, j, mid;
    
    scanf("%d", &n);
    
	/*
	for(i = 0 ;i<n/2+1;i++)
	{
		for( j = 0 ; j < n / 2 - i ; j++ )
			printf( " " );
		for( j = 0 ; j < i * 2 + 1 ; j++ )
			printf( "*" );
		printf( "\n" );
	}
	*/
	
	mid = n / 2 ;
    
    for(i=1; i<=n/2+1; i++) {
    	for (j=1; j<=mid-i+1; j++) {
            printf(" "); 
        }
        for (j=1; j<=2*i-1; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    
    
    return 0;
}


