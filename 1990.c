#include<stdio.h>

int main(){
    int sum = 0;
    char n[501];
    for(int i=0;; i++){
        scanf("%c", &n[i]);
        if(n[i]== '\n') break;
        sum += n[i] - '0';
    }
    if (sum % 3 == 0) printf("1");
    else printf("0");
    return 0;
}