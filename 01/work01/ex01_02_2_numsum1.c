/*
���� ������ �Է� �޾Ƽ� �� �ڸ��� ���� ���Ͻÿ�.
*/
#include <stdio.h>
 
int main() {
    int n, n1, n2, n3, i, sum = 0;

    printf("�ڿ��� �Է� : ");
    scanf("%d", &n); 

	n1 = n / 100 ;
	n2 = n % 100 /10 ;
	n3 = n2 % 10 ;     

	sum = n1 + n2 + n3 ;
    printf("�հ� : %d\n", sum) ;
    return 0;
}
