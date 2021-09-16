#include<iostream>
#include<cstring>

#define MAX_INPUT_STR 101
#define MAX_OUTPUT_STR 201
#define LOWER_CONVERTER 32

int main()
{
	bool isConsonant[ 123 ] ;
	memset( isConsonant, true, sizeof( bool ) * 123 ) ;

	isConsonant[ 'a' ] = false ;
	isConsonant[ 'A' ] = false ;

	isConsonant[ 'e' ] = false ;
	isConsonant[ 'E' ] = false ;

	isConsonant[ 'i' ] = false ;
	isConsonant[ 'I' ] = false ;

	isConsonant[ 'o' ] = false ;
	isConsonant[ 'O' ] = false ;

	isConsonant[ 'u' ] = false ;
	isConsonant[ 'U' ] = false ;

	isConsonant[ 'y' ] = false ;
	isConsonant[ 'Y' ] = false ;
	
	char inputStr[ MAX_INPUT_STR ] = { 0, } ;
	char ouputStr[ MAX_OUTPUT_STR ] = { 0, } ;

	size_t outStrIter = 0 ;
	size_t inStrIter = 0 ;

	scanf( "%s", inputStr ) ;

	while( '\0' != inputStr[ inStrIter ] )
	{
		const char curChar = inputStr[ inStrIter ] ;

		if( isConsonant[ curChar ] )
		{
			ouputStr[ outStrIter++ ] = '.' ;
			
			if( 'a' > curChar )
			{
				ouputStr[ outStrIter++ ] = curChar + LOWER_CONVERTER ;
			}
			else
			{
				ouputStr[ outStrIter++ ] = curChar ;
			}
		}

		inStrIter++ ;
	}

	ouputStr[ outStrIter ] = '\0' ;

	printf( "%s", ouputStr ) ;

	return 0 ;
}