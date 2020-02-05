#include <stdio.h>

#define n 3

int main(int agrc, const char* agrv[]){
  int c;
  int counter=0;
  while ((c=getchar())!=EOF)
  {
    counter++;
    if(c=='\n')
      counter=0;
    if(c=='\t'){
      while ((counter%n)!=0){
        putchar(' ');
        counter++;
      }
    }
    else
      putchar(c);
  }
  return 0;
}
