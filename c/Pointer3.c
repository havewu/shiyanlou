#include<stdio.h>
int main()
{
 int n,i,j,*p;//n : people number; k:n--;
 int m=3;
 printf("Enter the number of people:");
 scanf("%d",&n);
 printf("n=%d\n",n);
 int arr[n];
  for(i=0;i<n;i++)
   arr[i]= i+1;

 int k=n;
printf("0 k=%d\n",k);

// while(k>0)
// {
    
// }
// for(p=arr;p<(arr+n);p++)
 p=arr;
printf("------begin for-------\n");
 for(i=1;k>1;i++)
 {
printf("--------i=%d--------",i);
printf("k=%d\n",k);
printf("*p=%d\n",*p);
  //if(*p == 0 && p == (arr+n-1))
  //{
  //  p = arr;
  //}
   if(*p == 0)
   {
     while(*p == 0)
     {
       if(p == (arr + n-1))
       {
         p=arr;
         continue;
       }
       p++;
     }
      *p = i;
   }
   else
   {
     *p = i;
   }

printf("-----\n");
 for(j=0;j<n;j++)
  { printf("arr[%d]=%d\n",j,arr[j]);}
printf("k=%d\n",k);
printf("*p=%d\n",*p);

   if(*p != 0 && *p%m==0)
   {
     *p = 0;
     k--;
   }
   if(p == (arr+n-1))
   //if(p == &arr[n])
   {
     p=arr;
   }
   else
   {
     p++;
   }
printf("-----\n");
 for(j=0;j<n;j++)
  { printf("arr[%d]=%d\n",j,arr[j]);}
printf("k=%d\n",k);
printf("*p=%d\n",*p);
 }
 for(i=0;i<n;i++)
   printf("i=%d,arr=%d\n",i,arr[i]);
 //for(p=arr;p<(arr+n);p++)
 for(p=arr,i=0;i<n;i++,p++)
   if(*p != 0 )printf("THE END:%d\n",i+1);
 return 0;
}
// void fuzhi()
// {
//  int i;
//   for(i=0;i<n;i++)
//   {
//     if(*p == 0)continue;
//     *p = *(p-1) + 1;
//   }
// }
