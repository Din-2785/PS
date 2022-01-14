#include<iostream>
#include<string.h>

using namespace std ;

#define MAX_NUMBER 1000000 

static bool bIsPrime[ MAX_NUMBER + 1 ] ;

void PrintExpression( int n, int a, int b )
{
	cout << n << " = " << a << " + " << b << "\n" ;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( nullptr ) ;

	memset( bIsPrime, true, sizeof( bool ) * MAX_NUMBER ) ;

	for ( size_t i = 2; i <= MAX_NUMBER; i++ )
	{
		if ( bIsPrime[ i ] )
		{
			for ( size_t j = i * i; j <= MAX_NUMBER; j += i )
			{
				bIsPrime[ j ] = false ;
			}
		}
	}

	while ( true )
	{
		int n = 0 ;

		cin >> n ;

		if ( 0 == n )
		{
			break ;
		}

		for ( size_t i = 3; i <= MAX_NUMBER; i++ )
		{
			if ( bIsPrime[ i ] && bIsPrime[ n - i ] )
			{
				PrintExpression( n, i, n - i ) ;
				break ;
			}
		}
	}

	return 0 ;
}