#include<iostream>

using namespace std ;

#define MAX_COL 1000

static int d[ MAX_COL + 1 ] ;

int main()
{
	int n = 0 ;

	cin >> n ;

	for ( size_t i = 1; i <= n; i++ )
	{
		if ( 1 == i )
		{
			d[ i ] = 1 ;
		}
		else if ( 2 == i )
		{
			d[ i ] = 2 ;
		}
		else
		{
			d[ i ] = ( d[ i - 1 ] + d[ i - 2 ] ) % 10007 ;
		}
	}

	cout << d[ n ] << '\n' ;

	return 0 ;
}