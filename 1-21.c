#include <stdio.h>

#define n 3

int main(int argc,const char* argv[]){
  int counter =0;
  int c;

  while((c=getchar())!=EOF){
    if (c==' '){
      counter++;
      if((counter%n)==0){
        putchar('\t');
      //  printf("TAB");    testing
      }
    }
    else if(c!=' ') {
      for(int i=0;i<(counter%n);i++){
        putchar(' ');
      //  printf("s"); testing
      }
      putchar(c);
      counter =0;
    }

  }
  return 0;
}
