#include<stdio.h>

int arr[100001];

int f(int n){
    if(n==1||n==0) return 1;
    if(n<0) return 0;
    if(arr[n]) return arr[n];
    return arr[n] = (f(n-1) + f(n-2) + f(n-3)) % 1000;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;   
}