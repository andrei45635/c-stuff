#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int get_divisor_number ( int n ) {
	
	int div_cnt = 0;
	
	for (int i = 1; i * i <= n; i++ ) {
		if ( n % i == 0 ) {
			div_cnt++;

			if ( i != n / i ) {
				div_cnt++;
			}
		}
		
	}

	printf ( "The number %d has %d divisors\n", n, div_cnt );

	return div_cnt;

} 

int main() {

	bool not_prime = false;
		
	int no = 0;

	printf ( "Input your number: ");
	scanf( "%d", &no );	

	int div_no = get_divisor_number( no );

	int* dividers = malloc( ( div_no ) * sizeof( int ) );

	dividers[ 0 ] = 1;
	dividers[ div_no - 1] = no; 

	int k = 0;
	
	for ( int i = 2 ; i * i <= no ; i++ ) {
		if ( no % i == 0 ) {
			not_prime = true;
			
			dividers[ ++k ] = i;
			
			if ( i != no / i ) {
				dividers[ ++k ] = no / i;	
			}
		}
	}	 

	if ( !not_prime ) {
		printf ( "This number: %d is a prime number.\n", no );
	} else {
		printf ( "This number: %d is not a prime number.\n", no );
		printf ( "Its dividers are: \n" ) ;
		for ( int i = 0 ; i < div_no ; i++ ) {
			printf ( "%d\n", dividers[ i ] );
		}
	}

	free ( dividers );

	return 0;

}
