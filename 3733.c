#include <stdio.h>

long long int memo[10000001];

long long int f(long long int n){
    if (n == 1) return 1; 
    if(n > 10000000){
        if(n%2) return f(3*n+1)+1;
        else return f(n/2)+1;
    }
    else{
        if(memo[n]) return memo[n];
        else if(n%2) return memo[n] = f(3*n+1)+1;
        else return memo[n] = f(n/2)+1;
    }
}

int main(void){
    int a, b, max = 0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(f(i) > memo[max]) max = i;
    }
    printf("%d %lld", max, memo[max]);
    return 0;
}