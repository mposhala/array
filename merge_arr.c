#include<stdio.h>
int merge_arr(int arr1[],int arr2[],int newArr[],
 int n1, int n2, int n3)
 {
  // copy arr1 to new array
  for (int i = 0; i < n1; ++i)
  {
    newArr[i] = arr1[i];
  }

  // copy arr2 to new array
  for (int i = 0, j=n1; j < n3; ++i, ++j)
  {
    newArr[j] = arr2[i];
  }
}
// main function
int main()
{
  // array which should be merged
  int arr1[] = {12, 13, 10, 22, 30};
  int arr2[] = {9, 18, 17, 36, 42};

  // calculate size
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);
 // size of new array
  int n3 = n1 + n2;
      
  // create new array
  int newArr[n3];

  merge_arr(arr1, arr2,newArr, n1, n2, n3);
  // display resultant array
  printf("New array = ");
  for (int i = 0; i < n3; i++) {
    printf("%d\n",newArr[i]);
  }

  return 0;
}


