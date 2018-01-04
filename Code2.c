#include<stdio.h>
int main()
{
  char str[100];
  fgets(str,100,stdin);
  //printf("%s",str);
  int i,wc=0;
  for(i=0;str[i]!='\0';i++)
         if(str[i]==' ')
           {  
            if(i==0)
              wc-=1;
            while(str[i+1]==' ')
                i++;
            if(str[i]!='\0')
               wc+=1;
           }
   //if(str[i-2]==' ')
     // wc-=1;
   printf("\n%d",wc+1);
   return 0;
}
