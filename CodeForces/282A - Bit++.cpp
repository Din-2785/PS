#include<iostream>
#include<string>

int main()
{
	int resultVal = 0 ;

	int n = 0 ;
	std::cin >> n ;
	
	for ( size_t i = 0; i < n; i++ )
	{
		std::string iterExp ;
		std::cin >> iterExp ;

		if ( std::string::npos != iterExp.find( '+' ) )
		{
			++resultVal ;
		}
		else
		{
			--resultVal ;
		}
	}

	std::cout << resultVal << '\n' ;

	return 0 ;
}