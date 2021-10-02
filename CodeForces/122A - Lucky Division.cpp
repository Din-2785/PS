#include<iostream>

#define MAX_N_VAL 1000 

bool IsLuckyNumber( int number )
{
	bool ret = true ;

	while( 0 < number )
	{
		int digit = number % 10 ;

		if( 4 != digit && 7 != digit )
		{
			ret = false ;
			break ;
		}

		number = number / 10 ;
	}

	return ret ;
}

int main()
{
	bool recorededIfLuckyNumber[ MAX_N_VAL + 1 ] = { false, } ;

	for( int numberIter = 1; numberIter <= MAX_N_VAL; numberIter++ )
	{
		if( IsLuckyNumber( numberIter ) )
		{
			recorededIfLuckyNumber[ numberIter ] = true ;

			for( int i = 1; i <= MAX_N_VAL; i++ )
			{
				if( MAX_N_VAL >= ( numberIter * i ) )
				{
					recorededIfLuckyNumber[ numberIter * i ] = true ;
				}				
				else
				{
					break ;
				}
			}
		}
	}

	int inputNumber = 0 ;
	std::cin >> inputNumber ;

	if( recorededIfLuckyNumber[ inputNumber ] )
	{
		std::cout << "YES" ;
	}
	else
	{
		std::cout << "NO" ;
	}

	return 0 ;
}