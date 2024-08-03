#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int sum1 = 0;
        for(int j=1;j<=i;j++){
            sum1+=j;
        }
        sum+=sum1;
    }
    printf("%d", sum);
    return 0;
}