#include<iostream>

#define MOD 15746
#define MAX_N 1000000

using namespace std ;

int d[ MAX_N + 1 ] ;

int main()
{
	int n = 0 ;
	
	cin >> n ;

	d[ 0 ] = 0 ;
	d[ 1 ] = 1 ;
	d[ 2 ] = 2 ;

	for ( int i = 3; i <= n; i++ )
	{
		d[ i ] = ( d[ i - 2 ] + d[ i - 1 ] ) % MOD ;
	}

	cout << d[ n ] << '\n' ;

	return 0 ;
}