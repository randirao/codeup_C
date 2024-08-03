#include<stdio.h>
int main(){
    int arr[20][20]={}, n, x, y;
    for(int i=1;i<20;i++){
        for(int j=1;j<20;j++) scanf("%d", &arr[i][j]);
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d %d", &x, &y);
     
    return 0;
}