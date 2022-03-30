#include<iostream>
#include<cstdlib> 
#include<cstring>

#define MAX_LENGTH 10

using namespace std;

int main()
{
	int t = 0 ; 

	cin >> t ;

	for ( int testCase = 1; testCase <= t; testCase++ )
	{
		char n[ MAX_LENGTH ] ;

		cin >> n ;
	
		int maxNumber = atoi( n ) ;
		int minNumber = atoi( n ) ;

		const int numOfN = strlen( n ) ;

		for ( int i = 0; i < numOfN; i++ )
		{
			for ( int j = 0; j < numOfN; j++ )
			{
				char n_copy[ MAX_LENGTH ] ;

				strcpy( n_copy, n ) ;

				swap( n_copy[ i ], n_copy[ j ] ) ;

				if ( '0' != n_copy[ 0 ] )
				{
					const int candidateNumber = atoi( n_copy ) ;

					// 최대값 갱신
					if ( maxNumber < candidateNumber )
					{
						maxNumber = candidateNumber ;
					}

					// 최소값 갱신
					if ( minNumber > candidateNumber )
					{
						minNumber = candidateNumber ;
					}
				}
			}
		}

		cout << "#" << testCase << " " << minNumber << " " << maxNumber << '\n' ;
	}

	return 0 ;
}