#include<stdio.h>
int main()
{
  int i,j,len=8;
  //initiaze array
  int array[]={2,3,4,5,6,7,8,9};
  //int array[8];
  int min=2, max=9;
  //to print array elements
  for(i=0,j=min;i<len,j<max;i++,j++)
  
  {
     printf(" array elements are %d:\n",array[i]);
  }
   
   //int even_len[4]; int odd_len[4];
// even numbers in the array
   printf("even numbers of the array are : \n");
   for(i=0;i<len;i++)
   {
       if(array[i]%2 ==0)
       {
           printf("%5d \n",array[i]);
       }

   }
//odd numbers in the array are
printf("odd numbers of the array are : \n");
   for(i=0;i<len;i++)
   {
       if(array[i]%2 !=0)
       {
           printf("%5d \n",array[i]);
       }

   }
   
  return 0;
}