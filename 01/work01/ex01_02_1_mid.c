/*
�� ������ �Է� �޾Ƽ� �߾Ӱ��� ���Ͻÿ�.
*/
#include <stdio.h>

int main() {
	int a, b, c, midNum ;
	printf("3���� �߰����� ���մϴ�. ������ �Է��ϼ���.");
	scanf("%d%d%d", &a,&b,&c) ;
	
	if (a >= b) {
		if ( b >= c) {
			midNum = b;
		}
		else if ( c >= a) {
			midNum = a;
		}
		else {�� 
			midNum = c;
		}
	}
	else {
		if ( a > c) {
			midNum = a;
		}
		else if ( c > b) {
			midNum = b;
		}
		else {
			midNum = c;
		}
	} 
	
	printf("�߰��� : %d\n", midNum);
	 
	return 0;
}
