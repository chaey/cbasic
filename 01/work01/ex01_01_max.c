/*
�� ������ �Է� �޾Ƽ� �ִ밪�� ���Ͻÿ�.
*/
#include <stdio.h>
int main() {
	int a, b, c ;
	int max ;
	
	printf("3���� �ִ밪�� ���մϴ�. ������ �Է��ϼ���.");
	scanf("%d%d%d", &a,&b,&c) ;
	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	printf("�ִ밪 : %d\n", max);
	return 0;
}
