#include<iostream>

#define INIF 1000*10000 

using namespace std ;

int p[ 1001 ] ;
int d[ 1001 ] ;

int main()
{
	// init as INIF
	for ( size_t i = 1; i <= 1000; i++ )
	{
		d[ i ] = INIF ;
	}

	int n = 0 ;
	
	cin >> n ;

	for ( size_t i = 1; i <= n; i++ )
	{
		cin >> p[ i ] ;
	}

	for ( size_t i = 0; i <= n; i++ )
	{
		for ( size_t j = 1; j <= i; j++ )
		{
			d[ i ] = min( d[ i ], p[ j ] + d[ i - j ] ) ;
		}
	}

	cout << d[ n ] << "\n" ;

	return 0 ;
}