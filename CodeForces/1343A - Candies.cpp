#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int numOfTestCase = 0;
	cin >> numOfTestCase;

	for ( size_t testCaseIdx = 0; testCaseIdx < numOfTestCase; testCaseIdx++ )
	{
		int n = 0;
		cin >> n;

		for ( size_t k = 2; k <= 50; k++ )
		{
			const int powVal = static_cast< int >( pow( 2, k ) - 1 );
			
			if ( 0 == n % powVal )
			{
				cout << ( n / powVal ) << endl;
				break;
			}
		}
	}

	return 0;
}