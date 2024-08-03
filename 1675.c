#include <stdio.h>

int main(){
    char arr[200];
    fgets(arr, 200, stdin);
    for(int i=0 ; arr[i]!='\0' ; i++){
        if(arr[i]=='a') arr[i] = 'x';
        else if(arr[i]=='b') arr[i] = 'y';
        else if(arr[i]=='c') arr[i] = 'z';
        else if(arr[i]!=' ') arr[i] -= 3;
    }
    printf("%s", arr);
    return 0;
}