/*
1368 : ����纯�� ����ϱ� 2
�̹��� ������ ������� ���Ͽ� ����纯���� ������.
���� ������ ������ ����.

L=���� �Ʒ��� ����
R=������ �Ʒ��� ����
���� ���ǿ� ���� ����纯���� ����Ѵ�.
���� h�� �غ� k, ���� ���� d�� ���ٷ� �������� �и��Ǿ� �Էµȴ�.(1<=n<=100,2<=k<=100, d=L�Ǵ�R )
*/
#include <stdio.h>

int main() {
    int h, n, i, j, mid;
    char check;
    
    scanf("%d %d %c", &h,&n,&check);
    fflush(stdin); 
     
    for(i=1; i<=h; i++) {
    	if (check == 'R') { 
    		for (j=1; j<=h-i; j++) printf(" ");
		}
    	else if (check == 'L') {
    		for (j=1; j<i; j++) printf(" ");
		}
    	for (j=1; j<=n; j++) {
            printf("*"); 
        }
        printf("\n");
    }
     
    return 0;
}

