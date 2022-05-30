#include<iostream>
using namespace std;

bool isSelected[ 10 ] = { false, } ;
int selecatedNumber[ 9 ] = { 0, } ;

void func( int nextIdx, int n, int m )
{
	if ( nextIdx > m )
	{
		for ( int i = 1; i <= m; i++ )
		{
			cout << selecatedNumber[ i ] << " " ;
		}
	
		cout << '\n' ;
		
		return ;
	}

	for ( int i = 1; i <= n; i++ )
	{
		if ( false == isSelected[ i ] )
		{
			isSelected[ i ] = true ;
			selecatedNumber[ nextIdx ] = i ;

			func( nextIdx + 1, n, m ) ;

			isSelected[ i ] = false ;
		}
	}
}

int main()
{
	int n, m ;
	cin >> n >> m ;

	func( 1, n ,m ) ;

	return 0 ;
}