/*
1419 : love 2 
���� ������ �Էµȴ�.

�� ���忡�� love�� �� �� �������� ����Ͻÿ�.
���� �� ������ �Էµȴ�.(���� ����, �ִ� ���ڼ� 100)
*/
#include <stdio.h>

int main() {
	char str[101];
	int i, nc=0, flag=0;
	
	gets(str);
	i=0;
	
	/*
	for(i=0;str[i]!='\0';i++)
        if(str[i]=='l' && str[i+1]=='o' && str[i+2]=='v' && str[i+3]=='e')
            cnt++;
	*/
	
	while(str[i] != '\0') {
		if (str[i] == 'l') flag = 1;
		else if (flag && str[i] =='o') flag = 1;
		else if (flag && str[i] =='v') flag = 1;
		else if (flag && str[i] =='e') {
			nc++;
			flag = 0 ;	
		}
		else flag = 0;
		
		i++;
	}
	
	printf("%d", nc);	
	return 0; 
}
