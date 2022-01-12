#include<iostream>

using namespace std ;

int GCD( int a, int b )
{
	if ( 0 == b )
	{
		return a ;
	}
	else
	{
		return GCD( b, a % b ) ;
	}
}

int main()
{
	int n = 0 ;
	int s = 0 ;

	cin >> n >> s ;

	int b = 0 ;

	for ( int i = 0; i < n; i++ )
	{
		int a = 0 ;
		
		cin >> a ;

		a = abs( s - a ) ;

		b = GCD( a, b ) ;
	}

	cout << b << "\n" ;

	return 0 ;
}