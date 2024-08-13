#include<stdio.h>
int main(){
    int n, a=1, arr[101][101]={};
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            arr[i][j] = a;
            a++;
        }
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}