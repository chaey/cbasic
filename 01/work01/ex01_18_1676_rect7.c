/*
1677 : ���� �����
n*m ���̸� ������� �Ѵ�.

���� ���̿� ���� ���̰� �־����� ������ ���� ���̸� ����Ͻÿ�.

���� ���) 4 * 3�� ���̶��
+--+
|  |
+--+
�̿� ���� ����Ѵ�.
*/
#include <stdio.h>#include <stdio.h>

int main() {
    int n, m, i, j; 

	scanf("%d %d", &n, &m) ;
    for (i=1; i<=m ; i++) {
        for (j=1; j<=n; j++) {
        	if((j==1 && i==1) || (j==1 && i==m) || (j==n && i==1)|| (j==n && i==m))  printf("+");
        	else if (i==1 || i == m) printf("-");
        	else if (j==1 || j == n) printf("|");
        	else printf(" ");
		}
		printf("\n");
    }
 
    return 0;
}

