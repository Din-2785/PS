#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	
	cin >> n >> m;

	int passedDay = 0;

	while ( true )
	{
		if ( 0 < passedDay && 0 == passedDay % m )
		{
			++n;
		}

		if ( 0 == n )
		{
			break;
		}

		++passedDay;
		--n;
	}

	cout << passedDay << endl;

	return 0;
}