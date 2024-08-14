#include<stdio.h>
int main(){
    int n, j, a=1, arr[101][101]={};
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
            if(i%2){
                for(j=n; j>=1; j--) arr[j][i] = a++;
            }
            else{
                for(j=1; j<=n; j++) arr[j][i] = a++;
            }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}