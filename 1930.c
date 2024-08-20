#include<stdio.h>
int i = 1;
int SuperSum(int k, int n){
    int result=0;
    if(k==0) return n;
    for(int i=1; i<=n; i++){
        result+=SuperSum(k-1, i);
    }
    return result;
}
int main(){
    int k, n;
    while( scanf("%d %d", &k, &n) != EOF )
	printf("%d\n", SuperSum(k, n));
    return 0;
}