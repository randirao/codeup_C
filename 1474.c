#include<stdio.h>
int main(){
    int n, m, a=1, arr[101][101]={};
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        if(i%2){
            for(int j=m; j>=1; j--) arr[i][j] = a++;
        }
        else{
            for(int j=1; j<=m; j++) arr[i][j] = a++;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}