#include<stdio.h>
int f(int n){
    printf("%d\n", n--);
    if(n == 0) return 0;
    else return f(n);
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}