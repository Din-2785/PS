#include <iostream>

using namespace std ;

static int d[ 1001 ] ;
static int p[ 1001 ] ;

int main()
{
	int n = 0 ;
	cin >> n ;

	for ( size_t i = 1; i <= n; i++ )
	{
		int v = 0 ;
		cin >> v ;

		p[ i ] = v ;
	}

	d[ 1 ] = p[ 1 ] ;

	for ( size_t i = 2; i <= n; i++ )
	{
		int dynamicMaxVal = 0 ;

		for ( size_t k = 1; k <= ( i / 2 ); k++ )
		{
			const int maxCandidate = d[ k ] + d[ i - k ] ;

			if ( dynamicMaxVal < maxCandidate )
			{
				dynamicMaxVal = maxCandidate ;
			}
		}

		d[ i ] = max( p[ i ], dynamicMaxVal ) ;
	}

	cout << d[ n ] << '\n' ;

	return 0 ;
}