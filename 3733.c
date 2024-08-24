#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#include<stdio.h>

int memo[10000001];
int f(int a, int b){
    if(a==1) return 1;
    if(a%2){return memo[n] = }
    else {return memo[n] = }
}

int main(){
    int a, b, max = 0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        max = MAX(max, f(i));
    }
    return 0;
}