#include<iostream>
using namespace std ;

int t[ 16 ] ;
int p[ 16 ] ;
int d[ 16 ] ;

int main()
{
	int n = 0 ;
	
	cin >> n ;

	for ( int i = 1; i <= n; i++ )
	{
		cin >> t[ i ] >> p[ i ] ;
	}

	for ( int k = 0; k <= n; k++ )
	{
		for ( int i = 0; i < k; i++ )
		{
			for ( int j = i + 1; j <= k; j++ )
			{
				if ( j + t[ j ] - 1 <= k && d[ k ] <= d[ i ] + p[ j ] )
				{
					d[ k ] = d[ i ] + p[ j ] ;
				}
			}
		}
	}

	cout << d[ n ] << '\n' ;

	return 0 ;
}