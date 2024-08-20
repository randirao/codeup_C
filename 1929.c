#include<stdio.h>
void f(int n){
    if(n==1){}
    else{
        if(n%2) f(3*n+1);
        else f(n/2);
    }
    printf("%d\n", n);
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}