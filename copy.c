#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  FILE *f1,*f2;
  char ch;
 // if(f1 == NULL || f2)
  if(f1 == NULL)
  {
    printf("f1 null error");
    exit(0);
  }
  if(f2 != NULL) printf("f2 exist");
  f1 = fopen(argv[1],"w");
  f2 = fopen(argv[2],"w");
  ch = fgetc(f1);
  while(ch != EOF )
  {
    fputc(ch,f2);
    fseek(f1,1L,0);
    ch = fgetc(f1);
  }
  return 0;
}
