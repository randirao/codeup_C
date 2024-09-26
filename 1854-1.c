#include<stdio.h>

int f(char * a){
    if(*a < 10) return *a;
    return f(a+1) + (*a - '0');
}

int main(){
    char a[100];
    scanf("%s", a);
    printf("%d", f(a));
    return 0;
}