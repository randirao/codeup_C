#include<stdio.h>

void f(int n){
    if(n == 0) return;
    printf("*");
    return f(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}