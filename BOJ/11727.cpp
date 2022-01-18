#include <iostream>

#define MAX_NUMBER 1000

static int d[ MAX_NUMBER + 1 ] ;

int main()
{
	int n = 0 ;
	std::cin >> n ;
	
	d[ 1 ] = 1 ;
	d[ 2 ] = 3 ;

	for ( size_t i = 3; i <= n; i++ )
	{
		d[ i ] = ( 2 * d[ i - 2 ] + d[ i - 1 ] ) % 10007 ;
	}

	std::cout << d[ n ] << '\n' ;

	return 0 ;
}