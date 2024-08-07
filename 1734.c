#include<stdio.h>
int main(){
    char c[10];
    fgets(c, 10, stdin);
    printf("welcome! %s", c);
    return 0;
}