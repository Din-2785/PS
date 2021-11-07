#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1;
	string str2;

	cin >> str1 >> str2;

	int str1Iter = str1.size() - 1;
	int str2Iter = str2.size() - 1;

	int sameCharCnt = 0;

	while ( true )
	{
		if ( 0 > str1Iter ||
			 0 > str2Iter )
		{
			break;
		}

		if ( str1[ str1Iter ] == str2[ str2Iter ] )
		{
			sameCharCnt++;
		}
		else
		{
			break;
		}

		str1Iter--;
		str2Iter--;
	}

	const int res = ( str1.size() - sameCharCnt ) + ( str2.size() - sameCharCnt );

	cout << res;

	return 0;
}