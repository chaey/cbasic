/*
1416 : 2���� ��ȯ
� 10���� n�� �־����� 2������ ��ȯ�ؼ� ����Ͻÿ�.

��)

10    ----->  1010
0    ----->  0
1    ----->  1
2    ----->  10
1024    ----->  10000000000
*/
#include <stdio.h>
int main()
{
    int b[255] , n ;
    int i, size ;
    
    scanf("%d", &n) ;
    
    for(i=0; n > 1 ; i++) {
    	b[i] = n % 2;
    	n = n / 2 ;
	}
	
	if (n != 0) b[i] = 1;
	else b[i] = 0;
	size = i ;
	
	for(i=size; i>=0; i--) printf("%d", b[i]) ;
	
	
    return 0; 
}
