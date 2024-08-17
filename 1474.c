#include<stdio.h>
int main(){
    int n, m, a=1, arr[101][101]={};
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) arr[i][j] = a++;
    }
    for(int i=n; i>=1; i--){
        for(int j=m; j>=1; j--){
            
        }
        printf("\n");
    }
    return 0;
}