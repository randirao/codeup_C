#include<stdio.h>

//int f(int n, int r){
//
//}

int main(){
    int n, r; //5 2
    scanf("%d %d", &n, &r);

    int m=1; //분모
    int s=1; //분자
    int s_1=1;
    int r_1 = n-r; //(n-r)! / 3
    for(int i=0; i<n; i++) m *= (n-i); //n! /
    for(int i=0; i<r; i++) s *= (r-i); //r!
    for(int i=0; i<r_1; i++) s_1 *= (r_1-i); //(n-r)!
    printf("%d", m/(s*s_1));


//    printf("%d", f(n, r));
    return 0;
}