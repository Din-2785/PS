#include<stdio.h>
#include<string.h>

int main()
{
	char str[ 101 ] ;

	size_t n = 0 ;
	scanf( "%d", &n ) ;

	for( size_t i = 0; i < n; i++ )
	{
		scanf( "%s", str ) ;

		size_t numOfStr = strlen( str ) ;

		if( 10 < numOfStr )
		{
			printf( "%c%d%c\n", str[ 0 ], numOfStr - 2, str[ numOfStr - 1 ] ) ;
		}
		else
		{
			printf( "%s\n", str ) ;
		}
	}
}