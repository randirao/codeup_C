#include<stdio.h>

int main(){
    int sum = 0;
    char n[501];
    scanf("%s", n);
    for(int i=0; n[i]== '\n'; i++){
        sum += n[i] - '0';
    }
    if (sum % 3 == 0) printf("%d", sum);
    else printf("0");
    return 0;
}