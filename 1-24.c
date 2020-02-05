#include<stdio.h>

#define  MAXLINE 1000

char line[MAXLINE];
void parenthcheck(int par);
void brackcheck(int brak);
void bracecheck(int brace);
int mgetline(void);

int main(int argc, const char* argv[])
{
int c;
int parenth=0;
int brack=0;
int brace=0;
int quote1=1;
int quote2=1;
int length;

while ((length=mgetline())>0)
{
  c=0;
  while (line[c]<length)
  {
    if(line[c]=='(')
      parenth++;
    if(line[c]==')')
      parenth--;
    if(line[c]=='{')
      brack++;
    if(line[c]=='}')
      brack--;
    if(line[c]=='[')
      brace++;
    if(line[c]==']')
      brace--;

  }
}
  if(parenth!=0)
    printf("missing a matching parenthesis\n");
  if(brack!=0)
    printf("missing a matching bracket\n");
  if(brace!=0)
    printf("missing a matching brace\n");

return 0;
}


int mgetline(void)
{
  int c, i;
  extern char line[];
  for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!= '\n'; i++)
  {
    line[i]=c;
  }
  if(c=='\n'){
    line[i]=c;
    i++;
  }
  line[i]='\0';
  return i;
}
