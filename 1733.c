#include<stdio.h>
int main(){
    char c[30];
    scanf("%s", c);
    if(c[0]=='I' && c[1]=='O' && c[2]=='I' && c[3]=='\0'){
        printf("IOI is the International Olympiad in Informatics.");
        return 0;
    }
    printf("I don't care.");
    return 0;
}