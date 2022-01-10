#include<iostream>
#include<stack>

using namespace std ;

int main()
{
	stack<int> left ;
	stack<int> right ;
	stack<int> output ;

	int n = 0 ;
	
	cin >> n ;

	for ( size_t i = 0; i < n; i++ )
	{
		int a = 0 ;
		
		cin >> a ;

		left.push( a ) ;
	}

	bool bIsFirst = true ;

	while ( !left.empty() )
	{
		if ( bIsFirst )
		{
			output.push( -1 ) ;
			bIsFirst = false ;
		}
		else
		{
			const int leftTop = left.top() ;
			int rightTop = right.top() ;

			if ( leftTop < rightTop )
			{
				output.push( rightTop ) ;
			}
			else
			{
				while ( true )
				{
					if ( !right.empty() )
					{
						right.pop() ;
					}
					else
					{
						output.push( -1 ) ;
						break ;
					}

					if ( !right.empty() )
					{
						rightTop = right.top() ;

						if ( leftTop < rightTop )
						{
							output.push( rightTop ) ;
							break ;
						}
					}
				}
			}
		}

		right.push( left.top() ) ;
		left.pop() ;
	}

	while ( !output.empty() )
	{
		cout << output.top() << " " ;
		output.pop() ;
	}

	return 0 ;
}