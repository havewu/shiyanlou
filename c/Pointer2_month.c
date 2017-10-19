#include<stdio.h>
int main()
{
 int n;
 char *p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
 printf("Enter month number:\n");
 scanf("%d",&n);
 printf("%s",*(p+n-1));
 return 0;
}
