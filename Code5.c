#include<stdio.h>
int swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
  return 0;
}
int main()
{
  int a[20]={1,3,5,6,7,8},i,n=6,elem,pos;
  scanf("%d",&elem);
  for(i=0;i<n;i++)
    if(a[i]>elem)
      {
        pos=i;
        for(i=n;i>pos;i--)
           swap(&a[i],&a[i-1]);
        a[pos]=elem;
        pos=-1;
        n++;
        break;
      }
  if(pos!=-1)
   { 
     a[n]=elem;
     n++; 
   }
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
}
