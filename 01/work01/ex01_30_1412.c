/*
1412 : ���ĺ� ���� ����ϱ�
� ���� ������ �־����� �� ���ĺ��� �� �� ���Դ��� ����Ͻÿ�.
*/
#include <stdio.h>
int main()
{
    int cnt[26] = {0} ;
    char str[90] ;
    int i;
    
    gets(str);
    for(i=0; str[i] != '\0'; i++) {
    	if (str[i] >= 'a' && str[i] <= 'z') cnt[str[i] - 'a']++;
    	else if (str[i] >= 'A' && str[i] <= 'Z') cnt[str[i] - 'A']++;
	} 
	
	for(i=0; i< 26; i++) {
		printf("%c:%d\n", 'a'+i, cnt[i]) ;
	}
    
	
    return 0; 
}

