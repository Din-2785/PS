#include<iostream>

using namespace std;

#define MAX_STR_LENGTH 101

bool IsLowerCase( const char c )
{
	bool ret = false;

	if ( c > 'Z' )
	{
		ret = true;
	}

	return ret;
}

int main()
{
	char userStr[ MAX_STR_LENGTH ] = { 0, };
	cin >> userStr;

	bool isOtherUpperCase = true;

	for ( size_t i = 0; i < MAX_STR_LENGTH && '\0' != userStr[ i ]; i++ )
	{
		if ( 0 != i && IsLowerCase( userStr[ i ] ) )
		{
			isOtherUpperCase = false;
			break ;
		}
	}
	
	if ( isOtherUpperCase )
	{
		// 첫 글자가 소문자고 나머지가 대문자 인 경우
		if ( IsLowerCase( userStr[ 0 ] ) )
		{
			// 첫 글자는 대문자, 나머지는 소문자로 변환
			for ( size_t i = 0; i < MAX_STR_LENGTH && '\0' != userStr[ i ]; i++ )
			{
				if ( 0 == i )
				{
					userStr[ i ] -= 32;
				}
				else
				{
					userStr[ i ] += 32;
				}
			}
		}
		// 모두 대문자 인 경우
		else
		{
			// 모두 소문자로 변환
			for ( size_t i = 0; i < MAX_STR_LENGTH && '\0' != userStr[ i ]; i++ )
			{
				userStr[ i ] += 32;
			}
		}
	}

	cout << userStr;

	return 0;
}