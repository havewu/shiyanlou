#include<stdio.h>
int main()
{
 int n,i,*p;
 int a[3]={11,22,33};
 printf("Enter the number of people:");
 scanf("%d",&n);
 printf("n=%d\n",n);
 int arr_n[n];
  for(i=0;i<n;i++)
   arr_n[i]= i+1;
 p=arr_n;
 for(i=0;arr_n[i] != '\0';i++)
  printf("arr_n[%d]=%d\n",i,arr_n[i]);
  printf("arr_n[7]=%d\n",arr_n[7]);
 for(;*p != '\0';p++)
  printf("*p= %d\n",*p);
 printf("----split line----\n%d \n",*(p+1));
 printf("%d\n",*(p+2));
 printf("%d\n",*(p+3));
 printf("%d\n",*(p+4));
 return 0;
}
