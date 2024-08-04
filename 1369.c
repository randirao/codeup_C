#include <stdio.h>
int main(void)
{
  int n, k;
  scanf("%d %d", &n, &k);   //10 3
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(i==0 || i==n-1 || j==0 || j==n-1 || (j+i+1)%k==0) printf("*");
      //맨 위에 맨 밑에 맨 앞에 맨 뒤에 3의 배수
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
} 