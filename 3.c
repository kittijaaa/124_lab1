#include<stdio.h>
int main()
{
  long long n,i=0,j=0 ;
  scanf("%lld",&n) ;
  i = n%3;
  j = n%11;
  printf("%lld %lld",i,j);
    return 0;
}
