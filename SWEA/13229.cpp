#include <iostream>
#include <cstring>
using namespace std ;

int main()
{
	int t ;
	
	cin >> t;

	for ( size_t i = 1; i <= t; i++ )
	{
		char s[ 4 ] ;

		cin >> s ;

		int dayRemain = 0 ;

		if ( !strcmp( s, "SUN" ) )
		{
			dayRemain = 7 ;
		}
		else if ( !strcmp( s, "MON" ) )
		{
			dayRemain = 6 ;
		}
		else if ( !strcmp( s, "TUE" ) )
		{
			dayRemain = 5 ;
		}
		else if ( !strcmp( s, "WED" ) )
		{
			dayRemain = 4 ;
		}
		else if ( !strcmp( s, "THU" ) )
		{
			dayRemain = 3 ;
		}
		else if ( !strcmp( s, "FRI" ) )
		{
			dayRemain = 2 ;
		}
		else if ( !strcmp( s, "SAT" ) )
		{
			dayRemain = 1 ;
		}

		cout << "#" << i << " " << dayRemain << '\n' ;
	}

	return 0 ;
}