#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  FILE *f1,*f2;
  char ch;
  f1 = fopen(argv[1],"r");
  f2 = fopen(argv[2],"r");
  if(f1 == NULL || f2 != NULL)
    printf("error\n");
  f2 = fopen(argv[2],"w");
  ch = fgetc(f1);
  while(ch != EOF )
  {
    fputc(ch,f2);
    ch = fgetc(f1);
  }
  fclose(f1);
  fclose(f2);
  return 0;
}
