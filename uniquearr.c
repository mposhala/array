#include<stdio.h>
int main()
{
    //declaring array elements
    int array1[6]={1, 2 ,1 ,2 ,3 ,4};
    int i,j,k,n=6,count,null;
    for(i=0;i<n;i++)
    printf("%d\n",array1[i]);
    
    //logic to print unique elements
    printf("unique elements of the array are\n");
    for(i=0;i<n;i++)
    {
        count = 0;
       for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(array1[i]==array1[j])
              {
                 count++;
               } 
            }
        }
       if(count==0)
        {
          printf("%d ",array1[i]);
        }
    }
       printf("\n\n");
return 0;

}

    