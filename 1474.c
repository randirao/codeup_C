#include<stdio.h>
int main(){
    int n, m, a=1, sum=1, arr[101][101]={};
    scanf("%d %d", &n, &m); 
    for(int i=m; i>0; i--){    
        if(a%2==0){
            for(int j=1; j<=n; j++) arr[j][i] = sum++;
        }
        else{
            for(int j=n; j>=1; j--) arr[j][i] = sum++;
        }
        a++;
    }
    for(int i=1; i<=n; i++){   
        for(int j=1; j<=m; j++){   
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}