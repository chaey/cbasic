/* 
1207 : ������
�Է����� ���� 4���� ���°� ���´�.

���� ���´� 0�̸� ���������� ���� ����, 1�̸� �������� ���¸� ���Ѵ�.

�� : 1���� �������� ���� 
�� : 2���� �������� ���� 
�� : 3���� �������� ���� 
�� : 4���� �������� ���� 
�� : �ϳ��� ���������� ���� ���� 

�� ������ ���¸� ���� ��, ��, ��, ��, �� ����Ͻÿ�.
*/
#include <stdio.h>
int main() {
    int n1, n2, n3, n4, sum;

	scanf("%d %d %d %d", &n1, &n2, &n3, &n4) ;
    
    sum = n1 + n2 + n3 + n4;
    if (sum == 0) printf("��");
    else 
    
    switch(sum) {
    	case 0: printf("��"); break;
    	case 1: printf("��"); break;
    	case 2: printf("��"); break;
    	case 3: printf("��"); break;
    	case 4: printf("��"); break;
	}
    
    return 0;
}
