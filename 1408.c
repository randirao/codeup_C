#include<stdio.h>
int main(){
    char c[20];
    scanf("%s", c);
    for(int i=0; c[i]!='\0'; i++) printf("%c", c[i]+2);
    printf("\n");
    for(int i=0; c[i]!='\0'; i++) printf("%c", (c[i] * 7) % 80 + 48);
    return 0;
}