#include<stdio.h>
int main(){
    int h, k;
    char d;
    scanf("%d %d %c", &h, &k, &d);
    for(int i=1;i<=h;i++){
        switch(d){
            case 'L':
                for(int j=0;j<i-1;j++){
                printf(" ");
                }
                break;
            case 'R':
                for(int j=0;j<h-i;j++){
                printf(" ");
                }
                break;
        }
        for(int j=0;j<k;j++) printf("*");
        printf("\n");
    }
    return 0;
}