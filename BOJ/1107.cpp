#include<iostream>
using namespace std;

int n ;
int invalidCount ;
int invalidList[ 10 ] ;

int GetChannelLength( int n )
{
	int ret = 0 ;

	if ( n == 0 )
	{
		return 1 ;
	}

	while ( n > 0 )
	{
		ret++ ;
		n /= 10 ;
	}

	return ret ;
}

bool IsExistInvalidNumber( int n )
{
	if ( n == 0 )
	{
		for ( int i = 0; i < invalidCount; i++ )
		{
			if ( invalidList[ i ] == 0 )
			{
				return true ;
			}
		}
	}

	while ( n > 0 )
	{
		int eachNumber = n % 10 ;

		for ( int i = 0; i < invalidCount; i++ )
		{
			if ( invalidList[ i ] == eachNumber )
			{
				return true ;
			}
		}

		n /= 10 ;
	}

	return false ;
}

int main()
{
	cin >> n ;
	cin >> invalidCount ;

	for ( int i = 0; i < invalidCount; i++ )
	{
		cin >> invalidList[ i ] ;
	}

	int minPushCount = abs( n - 100 ) ;

	for ( int i = 0; i <= 1000000; i++ )
	{
		const int channelNumberLength = GetChannelLength( i ) ;
		const int candidatePushCount = abs( n - i ) + channelNumberLength ;

		if ( candidatePushCount < minPushCount )
		{
			if ( false == IsExistInvalidNumber( i ) )
			{
				minPushCount = candidatePushCount ;
			}
		}
	}

	cout << minPushCount << "\n" ;

	return 0 ;
}