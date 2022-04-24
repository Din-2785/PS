#include<iostream>
#include <algorithm>

using namespace std ;

int k[ 9 ] ;
int found[ 7 ] ;
int sumOfTall ;

void FindPeople()
{
	for ( int i = 0; i < 9; i++ )
	{
		for ( int j = 0; j < 9; j++ )
		{
			if ( i != j )
			{
				if ( 100 == sumOfTall - k[ i ] - k[ j ] )
				{
					k[ i ] = 0 ;
					k[ j ] = 0 ;
					return ;
				}
			}
		}
	}
}

void GetVaildPeople()
{
	int foundCount = 0 ;

	for ( int i = 0; i < 9; i++ )
	{
		if ( k[ i ] != 0 )
		{
			found[ foundCount++ ] = k[ i ] ;
		}
	}
}

int main()
{
	for ( int i = 0; i < 9; i++ )
	{
		cin >> k[ i ] ;
		sumOfTall += k[ i ] ;
	}

	sort( k, k + 9 ) ;

	FindPeople() ;

	GetVaildPeople() ;

	for ( int i = 0; i < 7; i++ )
	{
		cout << found[ i ] << '\n' ;
	}

	return 0 ;
}