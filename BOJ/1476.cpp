#include <iostream>
using namespace std ;

int main()
{
	int e ;
	int s ;
	int m ;

	cin >> e >> s >> m ;

	e -= 1 ;
	s -= 1 ;
	m -= 1 ;

	int i = 0 ;

	while ( true )
	{
		if ( e == i % 15 &&
			 s == i % 28 &&
			 m == i % 19 )
		{
			break ;
		}

		i++ ;
	}

	cout << i + 1 << "\n" ;

	return 0 ;
}