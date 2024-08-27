#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b)) // define MAX(a,b) : (a), (b) 비교해서 큰 거 리턴(매크로함수)

int memo[10001];    //메모[최대]
int score[10001];   //계단 점수[최대]

int f(int n){   //자료형 f(n)
    if(n <= 0){ //만약 0보다 작거나 같다면
        return 0;   //리턴 0
    }
    if(n == 1){ //만약 1이라면
        return score[1];//리턴 계단 점수[1]
    }
    if(memo[n]){//만약 메모[n]번째에 값이 있다면 리턴 메모[n]
        return memo[n];
    }
    return memo[n] = score[n] + MAX(score[n-1] + f(n-3), f(n-2));
    //리턴 메모[n] = 계단점수[n] + MAX(계단점수[n-1]+f(n-3), f(n-2))
}

int main(void){
    int n;  //변수(계단의 개수)
    scanf("%d", &n);  //계단 개수 입력받기
    for(int i=1; i<=n; i++){    //for 1부터 계단 개수까지
        scanf("%d", &score[i]);   //계단 점수 저장하기
    }
    printf("%d", f(n));//프린트 (f(계단 개수))
    //리턴0
}