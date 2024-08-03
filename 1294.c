#include <stdio.h>

int main(){
    char arr[200];
    fgets(arr, 200, stdin);
    for(int i=0 ; arr[i]!='\0' ; i++){
        if(arr[i]=='x') arr[i] = 'a';
        else if(arr[i]=='y') arr[i] = 'b';
        else if(arr[i]=='z') arr[i] = 'c';
        else if(arr[i]!=' ') arr[i] += 3;
    }
    printf("%s", arr);
    return 0;
}