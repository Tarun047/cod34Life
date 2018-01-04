#include<stdio.h>
int gcd(int a,int b)
 {
   if(b!=0)
     return gcd(b,a%b);
   else
     return a;
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",(a*b)/gcd(a,b));
}
