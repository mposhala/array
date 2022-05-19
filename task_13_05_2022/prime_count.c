#include <stdio.h>
// Function to find if number is prime
int checkPrime(int num){
    if (num <= 1)
      { return 0; }
   // Check from 2 to half of arr[i]
   for (int j = 2; j <= num/2; j++){
      if (num % j == 0){
         return 0;
      }
      return 1;
   }
}
int main(){
   int arr[] = { 1,3,5,4,8,13,11 };
   int n = 7;
   int count=0;
   int isprime=0;
   for(int i=0;i<n;i++){
      isprime=checkPrime(arr[i]);
      if(isprime==1)
         count++;
   }
   printf(" prime count is %d \n",count);
   return 0;
}