#include<stdio.h>
int f(int a, int b){
    if(a==b){
        return 0;
    }
    f(a,b-1);
    if(b % 2){
        printf("%d ", b);
    }
    return 0;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    f(a, b);
    return 0;
}