#include<stdio.h>
int main(){
    char c[90];
    int arr[123]={0};
    fgets(c, 90, stdin);
    for(int i=0; c[i]!='\0'; i++){
        if(c[i] >= 97 && c[i] <= 122) arr[c[i]] +=1;
    }
    for(int i=97; i<123; i++) printf("%c:%d\n",i, arr[i]);
    return 0;
}