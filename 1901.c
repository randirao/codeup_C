#include <stdio.h>
int i=1;
int f(int n){
  printf("%d\n",i++);
  if(i==n+1) return 0;
  else return f(n);
}
int main()
{
  int n;
  scanf("%d",&n);
  f(n);
  return 0;
}