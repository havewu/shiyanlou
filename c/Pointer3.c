#include<stdio.h>
int main()
{
 int n,i,*p;//n : total people number; k:how many people are left;
 int m=3;
 printf("Enter the number of people:");
 scanf("%d",&n);
 int arr[n];
  for(i=0;i<n;i++)
   arr[i]= i+1;

 int k=n;
 p=arr;
 for(i=1;k>1;i++)
 {
   if(*p == 0)
   {
     while(*p == 0)
     {
       if(p == (arr + n-1))  //1:  if *p is end,p=arr
       {
         p=arr;
         continue;
       }
       p++;
     }
   }
   *p = i;
   //if(*p != 0 && *p%m==0)
   if(*p%m==0)
   {
     *p = 0;
     k--;
   }
   //if(p == (arr+n-1))
   if(p == &arr[n-1])      // 2:  if *p is end,p=arr
   {
     p=arr;
   }
   else
   {
     p++;
   }
 }
 //for(p=arr;p<(arr+n);p++)
 for(p=arr,i=0;i<n;i++,p++)
   if(*p != 0 )printf("THE END:%d\n",i+1);
 return 0;
}
