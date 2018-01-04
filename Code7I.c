#include<stdio.h>
int lcm(int a,int b)
{
  int num=0;
  num+=b;
  if(num%a==0 && num%b==0)
    return num;
   else
     return lcm(a,b);  
}
int main()
{
  int a,b; 
  scanf("%d%d",&a,&b);
  a>b?printf("%d",lcm(b,a)):printf("%d",lcm(a,b));
}
