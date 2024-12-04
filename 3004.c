#include<stdio.h>
int main(){
    int n, input[50001]={0}, rank[50001]={0};
    scanf("%d", &n); // 5
    for(int i=0; i<n; i++){
        scanf("%d", &input[i]); // 50 23 54 24 123
        rank[input[i]]++;
    }
    
    return 0;
}