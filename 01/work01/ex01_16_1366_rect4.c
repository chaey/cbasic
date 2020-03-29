/*
1366 : 사각형 출력하기 4
대각선과 테두리가 그려진 사각형에 가로,세로 중심에 선을 추가하기로 했다.

n이 입력되었을때, 이러한 n*n 사각형을 출력하는 프로그램을 만들자.(단, 3<=n<=99, n은 홀수)
대각선과 테두리가 그려진 사각형에 가로, 세로 중심에 선을 추가한 사각형을 출력한다.
*/

#include <stdio.h>

int main() {
    int n, i, j, mid;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
    	for (j=1; j<=n; j++) {
            if ( i == 1 || i == n || j == 1 || j == n || i == n / 2 + 1  || j == n / 2 + 1 || i == j || j == n-i+1 ) 
            	printf("*");
            else 
            	printf(" ");
        }
        printf("\n");
    }
    return 0;
}

