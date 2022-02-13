#include<iostream>
using namespace std;

int d[ 501 ][ 501 ] ;

int main()
{
	int n ;
	cin >> n ;

	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= i; j++ )
		{
			cin >> d[ i ][ j ] ;
		}
	}


	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= i; j++ )
		{
			d[ i ][ j ] = max( d[ i - 1 ][ j - 1 ], d[ i - 1 ][ j ] ) + d[ i ][ j ] ;
		}
	}

	int res = 0 ;

	for ( int i = 1; i <= n; i++ )
	{
		if ( res < d[ n ][ i ] )
		{
			res = d[ n ][ i ] ;
		}
	}

	cout << res << '\n' ;

	return 0 ;
}