#include<stdio.h>

int memo[201];
int f(int n){
    if(n==1 || n==2) return 1;
    if(memo[n]) return memo[n];
    return memo[n]=(f(n-1)+f(n-2))%10009;
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", f(n));
    return 0;
}