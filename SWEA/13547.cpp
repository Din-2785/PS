#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t ;
	cin >> t ;
	
	for ( int i = 1; i <= t; i++ )
	{
		string s ;
		cin >> s;

		int loseCount = 0 ;

		for ( int sIter = 0; sIter < s.size(); sIter++ )
		{
			if ( 'x' == s[ sIter ] )
			{
				loseCount++ ;
			}
		}

		cout << "#" << i << " " ;

		if ( loseCount < 8 )
		{
			cout << "YES" << '\n' ;
		}
		else
		{
			cout << "NO" << '\n' ;
		}
	}

	return 0 ;
}