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
    for(int i=1; i<=n; i++){
        if(i%2){
            for(int j=n; j>=1; j--) printf("%d ", arr[i][j]);
            printf("\n");
        }
        else{
            for(int j=1; j<=n; j++) printf("%d ", arr[i][j]);
            printf("\n");
        }
    }
    return 0;
}