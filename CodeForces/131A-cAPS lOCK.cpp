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
		// ù ���ڰ� �ҹ��ڰ� �������� �빮�� �� ���
		if ( IsLowerCase( userStr[ 0 ] ) )
		{
			// ù ���ڴ� �빮��, �������� �ҹ��ڷ� ��ȯ
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
		// ��� �빮�� �� ���
		else
		{
			// ��� �ҹ��ڷ� ��ȯ
			for ( size_t i = 0; i < MAX_STR_LENGTH && '\0' != userStr[ i ]; i++ )
			{
				userStr[ i ] += 32;
			}
		}
	}

	cout << userStr;

	return 0;
}