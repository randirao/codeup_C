#include<stdio.h>
int i=1, cnt = 0, sum = 1;
int f(int n){
    if(n==1 || n==2) return 1;
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", f(n));
    return 0;
}