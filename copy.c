#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  FILE *f1,*f2;
  char ch;
 if (argv[1]) printf("HAVE argv[1]\n");
 if (!argv[1]) printf("NOT argv[1]\n");
 if (argv[2]) printf("HAVE argv[2]\n");
 if (!argv[2]) printf("NOT argv[2]\n");
if((f2 = fopen(argv[2],"w")) != NULL) printf(".f2 != NULL\n");
if((f2 = fopen(argv[2],"w")) == NULL) printf(".f2 == NULL\n");
  f1 = fopen(argv[1],"r");
  f2 = fopen(argv[2],"w");
 // if(f1 == NULL || f2)
  if(f1 == NULL)
 // {
    printf("f1 ==  null error");
 //   exit(0);
 // }
  if(f1 != NULL) printf("f1 != NULL\n");
  if(f2 != NULL) printf("f2 != NULL\n");
  if(f2 == NULL) printf("f2 == NULL\n");
 // if((f2 = fopen(argv[2],"w")) != NULL) printf("f2 != NULL\n");
 // if((f2 = fopen(argv[2],"w")) == NULL) printf("f2 == NULL\n");
  rewind(f1); 
 ch = fgetc(f1);
  putchar(ch);
  putchar(10); //Enter \n
  if(ch != EOF) printf("ch!=EOF\n");
  if(ch == EOF) printf("ch==EOF\n");
  while(ch != EOF )
  {
    fputc(ch,f2);
   // fseek(f1,1L,0);
    ch = fgetc(f1);
  }
  return 0;
}
