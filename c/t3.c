#include<stdio.h>
int main()
{

  printf("please enter a number:\n");
  int input;
  int *p;
  int i,j,k;
  scanf("%d",&input);

  int num[input];

  int m = 0;
  i = 0;
  j = 0;
  k = 0;
  p = num;
    for(k = 0; k <= input; k++)
      * (p + k) = k;

  while(m < input -1){

    if( *(p + i) != 0)
        j++;

    if(j == 3){
        j = 0;
        *(p + i) = 0;
        m ++;
    }
    if(i == input)
        i = 0;
    i++;
  }
   for(k = 0; k <= input; k++){
        if( *(p + k) !=  0)
        printf("this number is : %d \n",*(p + k));
    if( *(p + i) != 0)
        j++;
    if(j == 3){
        j = 0;
        *(p + i) = 0;
        m ++;
    }

    if(i == input)
       i = 0;

    i++;
  }
    for(k = 0; k <= input; k++){
        if( *(p + k) != 0)
        printf("this number is: %d \n",*(p + k));
    }
    return 0;
}
