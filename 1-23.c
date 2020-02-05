#include<stdio.h>
#define MAXLINE 1000

char line[MAXLINE];
char longest[MAXLINE];

int main(int agrc, const char* argv[]){
  int c, d;


  while ((c=getchar())!=EOF){
    
  }
  return 0;
}





int getline (void)
{
  int c, i;
  extern char line[];
  for (i=0; i<MAXLINE-1 && (c==getchar())!=EOF && c!= '\n'; i++)
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
