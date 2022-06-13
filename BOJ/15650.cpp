#include <iostream>
using namespace std ;

bool isBeingUsed[ 9 ] ;
int selectedNumber[ 9 ] ;
int n ;
int m ;


void SelectNumber( const int nextIndex, int prevNumber )
{
	if ( nextIndex > m )
	{
		for ( int choiceIter = 1; choiceIter <= m; choiceIter++ )
		{
			cout << selectedNumber[ choiceIter ] << ' ' ;
		}
		cout << '\n' ;
		return ;
	}

	for ( int numberIter = 1; numberIter <= n; numberIter++ )
	{
		if ( false == isBeingUsed[ numberIter ] && numberIter > prevNumber )
		{
			isBeingUsed[ numberIter ] = true ;
			selectedNumber[ nextIndex ] = numberIter ;
			SelectNumber( nextIndex + 1, numberIter ) ;
			isBeingUsed[ numberIter ] = false ;
		}
	}
}

int main()
{
	cin >> n >> m ;
	
	SelectNumber( 1, 0 ) ;

	return 0 ;
}