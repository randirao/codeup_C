#include<stdio.h>
int main(){
    char c[15];
    scanf("%s", c);
    if(c[0]=='l' && c[1]=='o' && c[2]=='v' && c[3]=='e' && c[4]=='\0') printf("I love you.");
    return 0;
}