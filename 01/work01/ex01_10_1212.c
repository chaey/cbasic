/* 
1212 : �ﰢ���� ���� ����
�� ���� ������ �ִ�.
������ �ǹ̴� ������ ���̸� ���Ѵ�.
�� �������� �ﰢ���� ���� �� �ִ��� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ﰢ���� ���� ����)
a, b, c �� ���� �����̰� c�� ���� �� ���̶�� �Ѵٸ�
c < a + b �̸� �ﰢ���� ������.
*/
#include <stdio.h>
 
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    /*
    if (a+b > c && a+c > b && b+c > a)
        printf("yes");
    else
        printf("no");
    */
	 
	if (a > b) {
	    temp = a ;
	    a = b ;
	    b = temp ;
	}
	if (a > c) {
	    temp = a ;
	    a = c ;
	    c = temp ;
	}
	if (b > c) {
	    temp = b ;
	    b = c ;
	    c = temp ;
	}
	 
    if ( a + b > c) printf("yes");
    else printf("no");
  
    return 0;
}

