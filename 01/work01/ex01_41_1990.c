/*
1990 : 3�� ��� �Ǻ��ϱ�
�ڿ��� n�� �ԷµǸ� 3�� ������� �ƴ��� �Ǻ��Ͻÿ�.
*/
#include <stdio.h>

int main() {
	char num[501];
	int i, sum=0, n;
	
	gets(num) ;
	
	i=0;
	while(num[i] != '\0') {
		n = num[i] - '0' ; 
		sum = sum + n; 
		i++;
	}
	
	if (sum % 3 == 0) printf("1") ;
	else  printf("0") ;
}
