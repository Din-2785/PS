#include <iostream>
using namespace std ;

int choice[ 8 ] ;
int m ;
int n ;

void func( int nextIndex )
{
	if ( nextIndex > m )
	{
		for ( size_t i = 1; i <= m; i++ )
		{
			cout << choice[ i ] << ' ' ;
		}
		cout << '\n' ;
		return ;
	}
	
	for ( size_t i = 1; i <= n; i++ )
	{
		choice[ nextIndex ] = i ;
		func( nextIndex + 1 ) ;
	}
}

int main()
{
	cin >> n >> m ;

	func( 1 ) ;

	return 0 ;
}