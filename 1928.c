#include<stdio.h>
int f(int n){
    printf("%d\n", n);
    if(n==1)return 0;
    if(n%2) return f(3*n+1);
    else return f(n/2);
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}