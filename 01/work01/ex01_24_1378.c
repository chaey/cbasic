/*
1378 : ������ �յ����̴� ���� ������ Ǯ�� ������ ���� ������ ���Ҵ�.

Sn=(1)+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+...+n)
������ ���� n�� �־��� �� �� ������ �� Sn�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    scanf("%d", &n);


    for (i=1; i<=n ; i++) {
        for (j=1; j<=i; j++) {
        	sum = sum + j;
		}
    }

    printf("%d", sum) ;
    return 0;
}
