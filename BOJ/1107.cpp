#include<iostream>
#include<string>
using namespace std;

char invalidList[ 10 ] ;
int invalidCount ;
int n ;

bool IsExistInvalidNumber( const string& channelString )
{
	for ( int i = 0; i < invalidCount; i++ )
	{
		for ( int s = 0; s < channelString.size(); s++ )
		{
			if ( invalidList[ i ] == channelString[ s ] )
			{
				return true ;
			}
		}
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

	for ( int i = 0; i <= 999999; i++ )
	{
		const string channelString = to_string( i ) ;
		const int candidatePushCount = abs( n - i ) + channelString.size() ;
		
		if ( candidatePushCount < minPushCount && !IsExistInvalidNumber( channelString ) )
		{
			minPushCount = candidatePushCount ;
		}
	}

	cout << minPushCount << "\n" ;

	return 0 ;
}