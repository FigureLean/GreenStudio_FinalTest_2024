#include<stdio.h>
int main()
{
  int k,a,b,c;
  for (k=100; k<=999;k++)
  {
    a=k%10; b=k/10%10; c=k/100;
    if (a*a*a+b*b*b+c*c*c==k)
    printf("%d是水仙花数",k);
  }
       return 0;
}