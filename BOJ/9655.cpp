#include<iostream>
using namespace std;

char s[ 1001 ] ;
char c[ 1001 ] ;

int main()
{
	int n ;
	
	cin >> n ;

	s[ 1 ] = 's' ;
	c[ 1 ] = 'c' ;

	s[ 2 ] = 'c' ;
	c[ 2 ] = 's' ;
	
	s[ 3 ] = 's' ;
	c[ 3 ] = 'c' ;

	for ( int i = 4; i <= n; i++ )
	{
		if ( 's' == c[ i - 1 ] || 's' == c[ i - 3 ] )
		{
			s[ i ] = 's' ;
		}
		else
		{
			s[ i ] = 'c' ;
		}

		if ( 's' == s[ i - 1 ] || 's' == s[ i - 3 ] )
		{
			c[ i ] = 's' ;
		}
		else
		{
			c[ i ] = 'c' ;
		}
	}

	if ( 's' == s[ n ] )
	{
		cout << "SK" << '\n' ;
	}
	else
	{
		cout << "CY" << '\n' ;
	}

	return 0 ;
}