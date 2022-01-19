#include <iostream>

int main()
{
	int d[ 12 ] = { 0, } ;

	d[ 0 ] = 0 ;
	d[ 1 ] = 1 ;
	d[ 2 ] = 2 ;
	d[ 3 ] = 4 ;

	for ( size_t i = 4; i <= 11; i++ )
	{
		d[ i ] = d[ i - 1 ] + d[ i - 2 ] + d[ i - 3 ] ;
	}

	int t = 0 ;
	std::cin >> t ;

	for ( size_t i = 0; i < t; i++ )
	{
		int n = 0 ;
		std::cin >> n ;
		
		std::cout << d[ n ] << '\n' ;
	}

	return 0 ;
}