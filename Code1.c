#include<stdio.h>
int main()
{
 long n=5,i,j,k;
 //scanf("%ld",&n);
 for(i=1;i<=n;i++)
 {
   for(j=1,k=2;j<=i;j++)
      {
         printf("%ld ",k);
         k=k*k;
      }
   printf("\n");
 }
  return 0;
}
