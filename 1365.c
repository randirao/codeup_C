#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if( (i == 1) || (j == 1) || (i == n) || (j == n) || (i == j) || (i+j == n+1)) printf("*");
            //맨 위에 줄이거나 맨 앞이거나 맨 밑에 줄이거나 맨 뒤거나 열과 행이 같거나 현재 열과 행이 n보다 1클 때
            else printf(" ");
        }
        printf("\n");
        }
    return 0;
}
