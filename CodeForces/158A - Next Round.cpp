#include<iostream>

int main()
{
	size_t n = 0 ;
	size_t k = 0 ;
	size_t list_k[ 51 ] = { 0, } ;

	std::cin >> n >> k ;

	for( size_t i = 1; i <= n; i++ )
	{
		std::cin >> list_k[ i ] ;
	}
	
	size_t biggerCnt = 0 ;

	for( size_t i = 1; i <= n; i++ )
	{
		if( 0 < list_k[ i ] )
		{
			if( list_k[ i ] >= list_k[ k ] )
			{
				biggerCnt++ ;
			}
		}
	}

	std::cout << biggerCnt ;
}