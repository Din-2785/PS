#include<iostream>
using namespace std ;

#define MAX_HOUSE_NUM 1000
#define RED 0
#define GREEN 1
#define BLUE 2

int d[ MAX_HOUSE_NUM + 1 ][ 3 ] ;
int p[ MAX_HOUSE_NUM + 1 ][ 3 ] ;

int main()
{
	int n = 0 ;
	
	cin >> n ;

	for ( int i = 1; i <= n; i++ )
	{
		for ( int c = 0; c <= 2; c++ )
		{
			cin >> p[ i ][ c ] ;
		}
	}

	d[ 1 ][ 0 ] = p[ 1 ][ 0 ] ;
	d[ 1 ][ 1 ] = p[ 1 ][ 1 ] ;
	d[ 1 ][ 2 ] = p[ 1 ][ 2 ] ;

	for ( int i = 2; i <= n; i++ )
	{
		// i 번째 집을 빨강으로 칠하는 경우
		d[ i ][ RED ] = min( d[ i - 1 ][ GREEN ], d[ i - 1 ][ BLUE ] ) + p[ i ][ RED ] ;

		// i 번째 집을 초록으로 칠하는 경우
		d[ i ][ GREEN ] = min( d[ i - 1 ][ RED ], d[ i - 1 ][ BLUE ] ) + p[ i ][ GREEN ] ;

		// i 번째 집을 파랑으로 칠하는 경우
		d[ i ][ BLUE ] = min( d[ i - 1 ][ RED ], d[ i - 1 ][ GREEN ] ) + p[ i ][ BLUE ] ;
	}

	int minVal = 1000001 ;

	for ( int c = 0; c <= 2; c++ )
	{
		if ( d[ n ][ c ] < minVal )
		{
			minVal = d[ n ][ c ] ;
		}
	}

	cout << minVal << '\n' ;
}