#include<iostream>

#define MOD 1000000009
#define MAX_NUM 1000000 

using namespace std ;

long long d[ MAX_NUM + 1 ] ;

int main()
{
	d[ 0 ] = 1 ;
	d[ 1 ] = 1 ;
	d[ 2 ] = 2 ;

	for ( int i = 3; i <= MAX_NUM; i++ )
	{
		d[ i ] = ( d[ i - 1 ] + d[ i - 2 ] + d[ i - 3 ] ) % MOD ;
	}

	int t = 0 ;
	
	cin >> t ;

	for ( int i = 1; i <= t; i++ )
	{
		int input = 0 ;
		
		cin >> input ;

		cout << d[ input ] << '\n' ;
	}

	return 0 ;
}