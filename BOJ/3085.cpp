#include<iostream>
using namespace std ;

char m[ 50 ][ 50 ] ;

int GetMaxCandiCount( int n )
{
	int maxCandiCount  = 0 ;

	for ( int r = 0; r < n; r++ )
	{
		char prevCandi = 'K' ;
		int cons = 0 ;

		for ( int c = 0; c < n; c++ )
		{
			if ( m[ r ][ c ] == prevCandi )
			{
				cons++ ;
				
				if ( maxCandiCount < cons )
				{
					maxCandiCount = cons ;
				}
			}
			else
			{
				prevCandi = m[ r ][ c ] ;
				cons = 1 ;
			}
		}
	}

	for ( int r = 0; r < n; r++ )
	{
		char prevCandi = 'K' ;
		int cons = 0 ;

		for ( int c = 0; c < n; c++ )
		{
			if ( m[ c ][ r ] == prevCandi )
			{
				cons++ ;

				if ( maxCandiCount < cons )
				{
					maxCandiCount = cons ;
				}
			}
			else
			{
				prevCandi = m[ c ][ r ] ;
				cons = 1 ;
			}
		}
	}

	return maxCandiCount ;
}

int main()
{
	int n = 0 ;	
	cin >> n ;

	for ( int r = 0; r < n; r++ )
	{
		for ( int c = 0; c < n; c++ )
		{
			cin >> m[ r ][ c ] ;
		}
	}
	
	int maxCandiCount = 0 ;

	for ( int r = 0; r < n; r++ )
	{
		for ( int c = 0; c < n; c++ )
		{
			if ( r - 1 >= 0 )
			{
				swap( m[ r ][ c ], m[ r - 1 ][ c ] ) ;
				maxCandiCount = max( maxCandiCount, GetMaxCandiCount( n ) ) ;
				swap( m[ r ][ c ], m[ r - 1 ][ c ] ) ;
			}

			if ( r + 1 < n )
			{
				swap( m[ r ][ c ], m[ r + 1 ][ c ] ) ;
				maxCandiCount = max( maxCandiCount, GetMaxCandiCount( n ) ) ;
				swap( m[ r ][ c ], m[ r + 1 ][ c ] ) ;
			}

			if ( c - 1 >= 0 )
			{
				swap( m[ r ][ c ], m[ r ][ c - 1 ] ) ;
				maxCandiCount = max( maxCandiCount, GetMaxCandiCount( n ) ) ;
				swap( m[ r ][ c ], m[ r ][ c - 1 ] ) ;
			}

			if ( c + 1 < n )
			{
				swap( m[ r ][ c ], m[ r ][ c + 1 ] ) ;
				maxCandiCount = max( maxCandiCount, GetMaxCandiCount( n ) ) ;
				swap( m[ r ][ c ], m[ r ][ c + 1 ] ) ;
			}
		}
	}

	cout << maxCandiCount << '\n' ;

	return 0 ;
}