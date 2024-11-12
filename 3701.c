#include<stdio.h>
long long memo[51][51];
int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j == 0 || i == j) memo[i][j] = 1;
            else memo[i][j] = memo[i-1][j-1] + memo[i-1][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) printf("%lld ", memo[i][j]);
        printf("\n");
    }
    return 0;
}