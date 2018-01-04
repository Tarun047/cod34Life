#include<stdio.h>

int main()
{
   char s[100];
   int i,n,es=0,os=0,a=0;
   scanf("%s",s);
   for(i=0;s[i]!='\0';i++)
  {
     if(a==0)
      {
         es+=s[i]-'0';
         a=1;
      }
      else
         {
            os+=s[i]-'0'; 
            a=0;
          }
   }
   if(es-os==0)
   { 
      printf("Yes");
      return 0;
   }
   else
  {
    int num=es-os;
    while(num>0)
     {
       num-=11;
       if(num==11)
       {
         printf("Yes");
         num=0;
         return 0;
       }
     }
  }
  printf("No");
  return 0;
}
