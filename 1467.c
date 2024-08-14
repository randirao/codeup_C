#include<stdio.h>
int main(){
    int n, m, a = 1, arr[101][101]={};
    scanf("%d %d", &n, &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            arr[i][j] = a;
            a++;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=m; j>=1; j--){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}