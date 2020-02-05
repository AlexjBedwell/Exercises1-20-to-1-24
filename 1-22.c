#include <stdio.h>
#define MAXLINE 1000
#define fold 10

char line[MAXLINE];
int mgetline(void);

int   main(int argc, const char* argv[]){
  int t;
  int leng=0;
  int curs;
  int temp;
  while((leng=mgetline())>0){
    if(leng>=fold){
      t=0;
      curs=0;
      while(t<leng)
      {
        if(line[t]==' ')
          temp = t;
        if(curs==fold)
        {
          line[temp]='\n';
          curs = 0;
        }
        curs++;
        t++;
      }
    }
    printf("%s", line);
  }
  return 0;
}



int mgetline (void)
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
