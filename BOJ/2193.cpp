#include<iostream>

using namespace std ;

static long long d[ 91 ][ 2 ] ;

int main()
{
	int n = 0 ;

	cin >> n ;

	d[ 1 ][ 1 ] = 1 ;

	for ( int i = 2; i <= n; i++ )
	{
		d[ i ][ 0 ] = d[ i - 1 ][ 0 ] + d[ i - 1 ][ 1 ] ;
		d[ i ][ 1 ] = d[ i - 1 ][ 0 ] ;
	}

	long long res = d[ n ][ 0 ] + d[ n ][ 1 ] ;

	cout << res << '\n' ;

	return 0 ;
}