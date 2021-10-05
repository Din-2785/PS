#include<iostream>

int GetCalVal( int x, int y, char op )
{
	if( '+' == op )
	{
		return x + y ;
	}
	else
	{
		return x * y ;
	}
}

int GetMaxValByBracks( int a, int b, int c, char op1, char op2 )
{
	int res1, res2 = 0 ;
	
	res1 = GetCalVal( a, b, op1 ) ;
	res1 = GetCalVal( res1, c, op2 ) ;

	res2 = GetCalVal( b, c, op2 ) ;
	res2 = GetCalVal( res2, a, op1 ) ;

	if( res1 > res2 )
	{
		return res1 ;
	}
	else
	{
		return res2 ;
	}
}

int main()
{
	int maxVal = 0 ;
	int a, b, c = 0 ;

	std::cin >> a >> b >> c ;

	//++
	if( maxVal < GetMaxValByBracks( a, b, c, '+', '+' ) )
	{
		maxVal = GetMaxValByBracks( a, b, c, '+', '+' ) ;
	}

	//+*
	if( maxVal < GetMaxValByBracks( a, b, c, '+', '*' ) )
	{
		maxVal = GetMaxValByBracks( a, b, c, '+', '*' ) ;
	}

	//**
	if( maxVal < GetMaxValByBracks( a, b, c, '*', '*' ) )
	{
		maxVal = GetMaxValByBracks( a, b, c, '*', '*' ) ;
	}

	//*+
	if( maxVal < GetMaxValByBracks( a, b, c, '*', '+' ) )
	{
		maxVal = GetMaxValByBracks( a, b, c, '*', '+' ) ;
	}
	

	std::cout << maxVal ;

	return 0 ;
}