#include<stdio.h>
void reverse_str(char *str)
{
  int i,j;
  char t; 
  for(i=0;str[i]!='\0';i++)
      j=i;
  for(i=0;i<j/2;i++)
     {
        t=str[i];
        str[i]=str[j-i]; 
        str[j-i]=t;
      }
  return;
}
int main()
{
 char S[100]; 
 fgets(S,100,stdin);
 reverse_str(S);
 printf("%s",S);
 return 0;
}
