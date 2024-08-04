#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);    //3
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);  //1 2 3

    for(int i=0; i<n; i++){ //0 1 2
        int a = i;  //a = 1
        for(int j=0; j<n; j++){ //0 1 2
            printf("%d ", arr[a]);  //2 3
            a++;
            if(a==n) a = 0; //x
        }
        printf("\n");
    }

    return 0;
}