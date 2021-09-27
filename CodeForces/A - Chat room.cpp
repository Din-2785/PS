#include<iostream>

#define MAX_CHAR_CNT 101

int main()
{
	char userInput[ MAX_CHAR_CNT ] ;
	std::cin >> userInput ;

	bool isFoundHello = false ;

	int16_t hCnt = 0 ;
	int16_t eCnt = 0 ;
	int16_t lCnt = 0 ;
	int16_t oCnt = 0 ;

	for( int16_t i = 0; i < MAX_CHAR_CNT; i++ )
	{
		if( '\0' == userInput[ i ] )
		{
			break ;
		}
		else if( 'h' == userInput[ i ] )
		{
			hCnt++ ;
		}
		else if( 'e' == userInput[ i ] )
		{
			if( 0 < hCnt )
			{
				eCnt++ ;
			}
		}
		else if( 'l' == userInput[ i ] )
		{
			if( 0 < eCnt )
			{
				lCnt++ ;
			}
		}
		else if( 'o' == userInput[ i ] )
		{
			if( 1 < lCnt )
			{
				isFoundHello = true ;
				break ;
			}
		}
	}

	if( isFoundHello )
	{
		std::cout << "YES" ;
	}
	else
	{
		std::cout << "NO" ;
	}

	return 0 ;
}