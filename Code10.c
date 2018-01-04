#include<stdio.h>
int strreverse(char *a,int l)
{
 char t;
 int i; 
 for(i=0;i<l/2;i++)
  {
     t=a[i];
     a[i]=a[l-i-1];
     a[l-i-1]=t;
  }
  return 0;
}
int main()
{
  int n=1050,k=5,temp=n,d,i,l=0,j;
  char s[100];
  for(i=0;k>0;i++)
  {
      d=n%10;
      s[i]=d+'0';
      n/=10;
      if(n==0 && k!=0)
         {
            n=temp;
            k-=1;
         }
      l++;
  }
  s[i]='\0';
  strreverse(s,l);
  printf("%s",s);
  return 0;
}
