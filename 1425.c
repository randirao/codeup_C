#include<stdio.h>
int main(){
    int n, c, arr[100];
    scanf("%d %d", &n, &c); //9 6
    for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
    
    for(int i=1; i<n;i++) {
    int min=i;
    for(int j=i+1; j<=n; j++) {
        if(arr[min] > arr[j]) min = j;
    }
    int tmp = arr[i];
    arr[i] = arr[min];
    arr[min] = tmp;
}
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
        if(i%c == 0) printf("\n");
    }
    return 0;
}