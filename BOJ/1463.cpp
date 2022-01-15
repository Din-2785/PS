#include<iostream>

using namespace std ;

static const int MaxNumber = 1000000 ;
static int memo[ MaxNumber + 1 ] ;

int main()
{
	int n = 0 ;
	cin >> n ;

	for ( size_t i = 2; i <= n; i++ )
	{
		memo[ i ] = MaxNumber ;

		if ( 0 == i % 3 )
		{
			int numOfOperationby3Mod = 1 + memo[ i / 3 ] ;

			if ( numOfOperationby3Mod < memo[ i ] )
			{
				memo[ i ] = numOfOperationby3Mod ;
			}
		}

		if ( 0 == i % 2 )
		{
			int numOfOperationby2Mod = 1 + memo[ i / 2 ] ;

			if ( numOfOperationby2Mod < memo[ i ] )
			{
				memo[ i ] = numOfOperationby2Mod ;
			}
		}

		int numOfOpertaionByMinusOne = 1 + memo[ i - 1 ] ;

		if ( numOfOpertaionByMinusOne < memo[ i ] )
		{
			memo[ i ] = numOfOpertaionByMinusOne ;
		}
	}

	cout << memo[ n ] << '\n' ;

	return 0 ;
}