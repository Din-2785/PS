#include <iostream>

using namespace std ;

int GetYear( int m, int n, int x, int y )
{
	int ret = -1 ;

	x -= 1 ;
	y -= 1 ;

	for ( int k = x; k < ( m * n ); k += m )
	{
		if ( k % n == y )
		{
			ret = k + 1 ;
			break ;
		}
	}

	return ret ;
}

int main()
{
	int t, m, n, x, y ;

	cin >> t ;

	for ( int i = 0; i < t; i++ )
	{
		cin >> m >> n ;
		cin >> x >> y ;

		int result = GetYear( m, n, x, y ) ;
		
		cout << result << '\n' ;
	}

	return 0 ;
}