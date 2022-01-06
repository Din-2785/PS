#include<iostream>
#include<stack>

using namespace std ;

int main()
{
	int k = 0 ;
	cin >> k ;

	stack<int> st ;

	for ( size_t i = 0; i < k; i++ )
	{
		int n = 0 ;
		cin >> n ;

		if ( 0 == n )
		{
			st.pop() ;
		}
		else
		{
			st.push( n ) ;
		}
	}

	int accmulatedValue = 0 ;
	
	while ( !st.empty() )
	{
		accmulatedValue += st.top() ;
		st.pop() ;
	}

	cout << accmulatedValue << "\n" ;

	return 0 ;
}