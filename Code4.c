#include<stdio.h>
int main()
{
  char s[100],ch;
  int pos,i;
  fgets(s,100,stdin);
  scanf("%c",&ch);
  for(i=0;s[i]!='\0';i++)
    if(s[i]==ch)
      pos=i;
  printf("%d",pos);
}
