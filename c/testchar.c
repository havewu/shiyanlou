#include<stdio.h>
#include<string.h>
int main()
{
 char c[]="I love";
 printf("c[]=\"I love\"\n");
 printf("Len=%d\n",strlen(c));
 
 c[]={"I love"};
 printf("c[]={\"I love\"}\n");
 printf("Len=%d\n",strlen(c));
 
 c[]={'I',' ','l','o','v','e'};
 printf("c[]={'I',' ','l','o','v','e'}");
 printf("Len=%d",strlen(c));
 
 c[]={'I',' ','l','o','v','e','\0'};
 printf("c[]="I love"\n");
 printf("Len=%d",strlen(c));
 return 0;
}
