#include<iostream>

using namespace std ;

int p[ 1001 ] ;
int d[ 1001 ] ;

int main()
{
	int n = 0 ;
	cin >> n ;

	for ( size_t i = 1; i <= n; i++ )
	{
		cin >> p[ i ] ;
	}

	for ( size_t i = 1; i <= n; i++ )
	{
		for ( size_t k = 1; k <= i; k++ )
		{
			d[ i ] = max( d[ i ], d[ i - k ] + p[ k ] ) ;
		}
	}

	cout << d[ n ] << "\n" ;

	return 0 ;
}