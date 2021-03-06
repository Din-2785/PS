#if 0
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	for ( size_t i = 0; i < t; i++ )
	{
		stack<char> st;
		string str;

		cin >> str;

		int checkedStrIndex = 0;

		while ( checkedStrIndex < str.size() )
		{
			if ( '(' == str[ checkedStrIndex ] )
			{
				st.push( str[ checkedStrIndex ] );
			}
			else if ( ')' == str[ checkedStrIndex ] && !st.empty() )
			{
				st.pop();
			}
			else
			{
				break;
			}

			checkedStrIndex++;
		}

		if ( str.size() == checkedStrIndex && st.empty() )
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}

	return 0;
}
#else
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	for ( size_t i = 0; i < t; i++ )
	{
		string str;
		cin >> str;

		int stackCnt = 0;
		int checkedStrIndex = 0;

		while ( checkedStrIndex < str.size() )
		{
			if ( '(' == str[ checkedStrIndex ] )
			{
				stackCnt++;
			}
			else
			{
				stackCnt--;
			}

			if ( 0 > stackCnt )
			{
				break;
			}

			checkedStrIndex++;
		}

		if ( 0 == stackCnt )
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}

	return 0;
}
#endif // 0
