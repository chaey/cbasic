/*
3129 : �ùٸ� ��ȣ 2
���� ��ȣ�� �ݴ� ��ȣ�� ���������δ� �ùٸ� ��ȣ ���ڿ��� �Ǵ��� �� ����.

���� ���, )()( �̷� ���ڿ��� ������ ������ �ùٸ� ��ȣ ���ڿ��� �ƴϴ�.
� ��ȣ ���ڿ��� �־����� �ùٸ� ��ȣ ���ڿ����� �Ǵ��Ͻÿ�.
*/
#include <stdio.h>
#include <string.h>

int main() { 
	int n,i, cnt=0;
	char str[50001];
	
	scanf("%s", &str) ; 
	n = strlen(str);
	for(i=0; i< n; i++) {
		if (cnt < 0 ) break;
		if (str[i] == '(') cnt++;
		else if (str[i] == ')') cnt--;
	}
	
	if (cnt == 0) printf("good") ;
	else printf("bad") ;
}
