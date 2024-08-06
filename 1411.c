#include<stdio.h>
int main(){
    int n, a;
    scanf("%d", &n);
    int arr[n+1];
    for(int i = 0; i <= n; i++) arr[i] = 0;
    for(int i=1; i<n; i++){
        scanf("%d", &a);
        arr[a] = 1;
    }
    for(int i=1; i<=n; i++){
        if(arr[i]==0) printf("%d", i);
    }
    return 0;
}