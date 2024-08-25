#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#include<stdio.h>

int memo[10000001];
int f(int n){
    if(n==1) return 1;
    if(n%2) return memo[n] = f(3*n+1);
    else return memo[n] = f(n/2);
}

int main(){
    int a, b, max = 0, min = 10000001;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        max = MAX(max, f(i));
        min = MIN(min, f(i));
    }
    printf("%d %d", min, max);
    return 0;
}