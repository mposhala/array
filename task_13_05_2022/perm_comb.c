#include <stdio.h>
#include <math.h>

long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}
int main() {
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	n=10,r=7;
	if( n>= r) {
		printf( " %d Combination %d is %d\n", n,r,ncr( n , r));
		printf(" %d Permutation %d  is %ld\n", n,r,npr( n, r));
	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
    return 0;
}