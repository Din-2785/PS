#include<iostream>

using namespace std ;

int GCD( int a, int b )
{
	if ( 0 == b )
	{
		return a ;
	}
	else
	{
		return GCD( b, a % b ) ;
	}
}

int main()
{
	int inputList[ 100 ] = { 0, } ;
	int t = 0 ;

	cin >> t ;

	for ( size_t tIndex = 0; tIndex < t; tIndex++ )
	{
		int n = 0 ;
		
		cin >> n ;

		for ( size_t nIndex = 0; nIndex < n; nIndex++ )
		{
			cin >> inputList[ nIndex ] ;
		}

		long long sumOfGcd = 0 ;

		for ( size_t i = 0; i < n; i++ )
		{
			for ( size_t j = i + 1; j < n; j++ )
			{
				sumOfGcd += GCD( inputList[ i ], inputList[ j ] ) ;
			}
		}

		cout << sumOfGcd << "\n" ;
	}

	return 0 ;
}