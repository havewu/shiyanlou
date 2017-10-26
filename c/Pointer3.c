#include<stdio.h>
int main()
{
 int n,i,k,*p;//n : people number; k:n--;
 int a[3]={11,22,33};
 printf("Enter the number of people:");
 scanf("%d",&n);
 printf("n=%d\n",n);
 int arr_n[n];
  for(i=0;i<n;i++)
   arr_n[i]= i+1;
 p=arr_n;
  

 return 0;
}
