#include<stdio.h>
int sum = 1;
void f(int n){
    if(n-1 == 0) return;
    sum *= n;
    f(n-1);
    return;
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", sum);
    return 0;
}