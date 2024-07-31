#include<stdio.h>
int main(){
    int n, x, y, arr[20][20]={};
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &x, &y);
        arr[x][y]=1;
    }
    for(int i=1;i<20;i++){
        for(int j=1;j<20;j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}