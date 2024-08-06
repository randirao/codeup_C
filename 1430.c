#include<stdio.h>
int main(){
    int n, m, cnt, arr[10000001]={0};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &cnt);
        arr[cnt] = 1;
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &cnt);
        printf("%d ", arr[cnt]);
    }
    return 0;
}