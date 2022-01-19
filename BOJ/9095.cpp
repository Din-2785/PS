#include <iostream>

int main()
{
	int d[ 12 ] = { 0, } ;

	d[ 0 ] = 1 ;
	d[ 1 ] = 1 ;
	d[ 2 ] = 2 ;

	for ( size_t i = 3; i <= 11; i++ )
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