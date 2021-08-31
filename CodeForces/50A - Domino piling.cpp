#include<iostream>

int main()
{
	size_t m, n ;
	
	std::cin >> m >> n ;

	size_t outPut = static_cast< size_t >( ( m * n ) / 2 ) ;

	std::cout << outPut ;

	return 0 ;
}