#include<iostream>

#define MAX_BUILDING_COUNT 1000
#define MAX_TEST_COUNT 10

using namespace std ;

int building[ MAX_BUILDING_COUNT ] = { 0, } ;

int main()
{
	for ( int t = 0; t < MAX_TEST_COUNT; t++ )
	{
		int testLength = 0 ;
		
		cin >> testLength ;

		for ( int i = 0; i < testLength; i++ )
		{
			cin >> building[ i ] ;
		}

		// �������� ���� ���� �� ī��Ʈ
		int houseCount = 0 ;

		for ( int i = 2; i < testLength - 2; i++ )
		{
			int minDiffCount = 256 ;

			minDiffCount = min( minDiffCount, ( building[ i ] - building[ i - 2 ] ) ) ;
			minDiffCount = min( minDiffCount, ( building[ i ] - building[ i - 1 ] ) ) ;
			minDiffCount = min( minDiffCount, ( building[ i ] - building[ i + 1 ] ) ) ;
			minDiffCount = min( minDiffCount, ( building[ i ] - building[ i + 2 ] ) ) ;

			// ������ ��� building[ i ]�� �������� ���� ���밡 ������ ����.
			if ( 0 < minDiffCount )
			{
				houseCount += minDiffCount ;
			}
		}

		cout << "#" << t + 1 << " " << houseCount << '\n' ;
	}

	return 0 ;
}