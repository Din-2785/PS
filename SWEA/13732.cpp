#include<iostream>

using namespace std;

char board[ 20 ][ 20 ] ;

int GetWidthCount( int x, int y, int boardSize )
{
	int ret = 0 ;

	for ( size_t i = 0; ( y + i ) < boardSize; i++ )
	{
		if ( '#' == board[ x ][ y + i ] )
		{
			++ret ;
		}
		else
		{
			break ;
		}
	}

	return ret ;
}

int GetHeightCount( int x, int y, int boardSize )
{
	int ret = 0 ;

	for ( size_t i = 0; ( x + i ) < boardSize; i++ )
	{
		if ( '#' == board[ x + i ][ y ] )
		{
			++ret ;
		}
		else
		{
			break ;
		}
	}

	return ret ;
}

int main()
{
	int t = 0 ;

	cin >> t ;

	for ( size_t i = 0; i < t; i++ )
	{
		// 보드 입력
		bool isFirst = true ;
		int startX = 0 ;
		int startY = 0 ;

		int blockedCount = 0 ;
		int boardSize = 0 ;

		cin >> boardSize ;

		for ( size_t j = 0; j < boardSize; j++ )
		{
			for ( size_t k = 0; k < boardSize; k++ )
			{
				cin >> board[ j ][ k ] ;

				if ( '#' == board[ j ][ k ] )
				{
					blockedCount++ ;

					if ( isFirst )
					{
						startX = j ; 
						startY = k ;
						isFirst = false ;
					}
				}
			}
		}

		cout << "#" << i + 1 << " " ;

		// 정사각형 여부 검사
		int checkedSize = 0 ;

		const int heightSize = GetHeightCount( startX, startY, boardSize ) ;

		for ( size_t x = startX; x < boardSize; x++ )
		{
			const int widthCount = GetWidthCount( x, startY, boardSize ) ;

			if ( heightSize == widthCount )
			{
				checkedSize += widthCount ;
			}
		}

		if ( checkedSize == blockedCount )
		{
			cout << "yes" ;
		}
		else
		{
			cout << "no" ;
		}

		cout << '\n'; 
	}

	return 0 ;
}