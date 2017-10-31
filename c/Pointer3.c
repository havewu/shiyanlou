#include<stdio.h>
int main()
{
 int n,i,k,*p;//n : people number; k:n--;
 int m=3;
 int a[3]={11,22,33};
 printf("Enter the number of people:");
 scanf("%d",&n);
 printf("n=%d\n",n);
 int arr[n];
  for(i=0;i<n;i++)
   arr[i]= i+1;

 k=n;


// while(k>0)
// {
    
// }
 return 0;
}

void for()
{
 for(p=arr;p<(arr+n);p++)
 {
   if(*p == 0)
   {
     continue;
   }
   if(*p%m==0)
   {
     *p = 0;
     k--;
   }
   if(p == arr+n)
   {
     p+1 = arr; 
   }
 }
}
void fuzhi()
{
 int i;
  for(i=0;i<n;i++)
  {
    if(*p == 0)continue;
    *p = *(p-1) + 1;
  }
}
