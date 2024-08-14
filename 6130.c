#include<stdio.h>
int main(){
    int a, b;
    char c, d;
    scanf("%d%c%c%d", &a, &c, &d, &b);
    printf("%.2f", (float)-b/a);
    return 0;
}