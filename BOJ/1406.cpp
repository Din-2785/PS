#include<iostream>
#include<stack>

using namespace std ;

int main()
{
	stack<char> left ;
	stack<char> right ;

	while ( true )
	{
		char c = getchar() ;
		
		if ( '\n' == c )
		{
			break ;
		}

		left.push( c ) ;
	}

	int m ;
	cin >> m ;

	for ( size_t i = 0; i < m; i++ )
	{
		char command ;
		cin >> command ;

		if ( 'L' == command )
		{
			// 커서가 문장의 맨 앞이면 무시됨
			if ( !left.empty() )
			{
				right.push( left.top() ) ;
				left.pop() ;
			}
		}
		else if ( 'D' == command )
		{
			// 커서가 문장의 맨 뒤이면 무시됨
			if ( !right.empty() )
			{
				left.push( right.top() ) ;
				right.pop() ;
			}
		}
		else if ( 'B' == command )
		{
			// 커서가 문장의 맨 앞이면 무시됨
			if ( !left.empty() )
			{
				left.pop() ;
			}
		}
		else
		{
			char addChar ;
			cin >> addChar ;
			
			left.push( addChar ) ;
		}
	}

	while ( !left.empty() )
	{
		right.push( left.top() ) ;
		left.pop() ;
	}

	while ( !right.empty() )
	{
		cout << right.top() ;
		right.pop() ;
	}
	
	cout << "\n" ;

	return 0 ;
}
