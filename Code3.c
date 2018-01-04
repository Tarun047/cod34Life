#include<stdio.h>
int main()
{
  char str[200];
  fgets(str,200,stdin);
  int i,j=0;
  for(i=0;str[i]!='\0';i++)
     if(str[i]!=' ')
        str[j++]=str[i];
   str[j]='\0';
   printf("%s",str);
  return 0;
}
