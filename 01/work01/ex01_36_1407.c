/*
1407 : ���ڿ� ����ϱ� 1
����(���ڼ�)�� 100������ ���ڿ��� �Է¹޾� ������ �����ϰ� ����Ͻÿ�.
*/
#include <stdio.h>
int main()
{
    char a[100];
	int i;		

	gets(a); 
	for(i=0; a[i] != '\0'; i++) {
		if ( a[i] == ' ') continue; 
		printf("%c", a[i]);
	} 
	 
    return 0; 
}

