#include<stdio.h>

int sosu(int n){
    int cnt = 0;
    for(int i=2 ; i<n ; i++){
    if(n%i==0) cnt++;
  }
  if(cnt == 0) return 1;
  else return 0;
}

int main(){
    int n;  
    scanf("%d", &n);
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            if(sosu(i) && sosu(n/i)){
                printf("%d %d", i, n/i);
                return 0;
            }
        }
    }
    printf("wrong number");
    return 0;
}