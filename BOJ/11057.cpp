#include<iostream>
using namespace std ;

int d[ 1001 ][ 10 ] ;

int main()
{
	int n = 0 ;
	
	cin >> n ;

	for ( int i = 0; i <= 9; i++ )
	{
		d[ 1 ][ i ] = 1 ;
	}

	for ( int k = 2; k <= n; k++ )
	{
		for ( int i = 0; i <= 9; i++ )
		{
			for ( int j = 0; j <= i; j++ )
			{
				d[ k ][ i ] = ( d[ k ][ i ] + d[ k - 1 ][ j ] ) % 10007 ;
			}
		}
	}

	// n에 대한 오르막 개수 계산
	int res = 0 ;

	for ( int i = 0; i <= 9; i++ )
	{
		res += d[ n ][ i ] ;
	}

	res %= 10007 ;


	cout << res << '\n' ;

	return 0 ;
}