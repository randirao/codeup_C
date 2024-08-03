#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);    //9
    for(int i=0; i<n; i++){   //1 2 3 4 5 6 7 8 9
        for(int j=0; j<n; j++){    //1 2 3 4 5 6 7 8 9
            if( (i == 0) || (j == 0) || (i == n-1) || (j == n-1) || (i == j-1) || (i+j == n)){
                //맨 위에 줄이거나 맨 앞이거나 맨 밑에 줄이거나 맨 뒤거나 열과 행이 같거나 
                printf("*");
            }
            else printf(" ");   //아니면
        }
        printf("\n");
        }
    return 0;
}
