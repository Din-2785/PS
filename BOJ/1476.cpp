#include <iostream>
using namespace std ;

int main()
{
	int e = 0 ;
	int s = 0 ;
	int m = 0 ;

	cin >> e >> s >> m ;

	int iterE = 1 ;
	int iterS = 1 ;
	int iterM = 1 ;

	int year = 1 ;

	while ( true )
	{
		if ( iterE == e && iterS == s && iterM == m )
		{
			cout << year << '\n' ;
			break ;
		}

		year++ ;

		iterE++ ;
		iterS++ ;
		iterM++ ;

		if ( iterE > 15 )
		{
			iterE = 1 ;
		}

		if ( iterS > 28 )
		{
			iterS = 1 ;
		}

		if ( iterM > 19 )
		{
			iterM = 1 ;
		}
	}

	return 0 ;
}