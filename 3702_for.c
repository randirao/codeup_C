#include<stdio.h>
int memo[51][51];
void f(int r, int c){
    for(int i=0; i<r; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) memo[i][j] = 1;
            else memo[i][j] = memo[i - 1][j - 1] + memo[i - 1][j];
        }
    }
}
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    printf("%d", f(r, c));
    return 0;
}