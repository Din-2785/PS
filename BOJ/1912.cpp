#include<iostream>
using namespace std ;

int d[ 100001 ] ;
int a[ 100001 ] ;

int main()
{
	int n = 0 ;
	
	cin >> n ; 
	
	for ( int i = 1; i <= n; i++ )
	{
		cin >> a[ i ] ;
	}

	for ( int i = 1; i <= n; i++ )
	{
		d[ i ] = max( a[ i ], d[ i - 1 ] + a[ i ] ) ;
	}

	int maxVal = -1001 ;

	for ( int i = 1; i <= n; i++ )
	{
		if ( maxVal < d[ i ] )
		{
			maxVal = d[ i ] ;
 		}
	}

	cout << maxVal << '\n' ;

	return 0 ;
}