#include<iostream>
#include<string>

using namespace std ;

int main()
{
	unsigned int uStackSize = 0 ;
	unsigned int uPipeCount = 0 ;
	
	string str ;
	cin >> str ;

	unsigned int uStringSize = str.size() ;

	for ( size_t strIndex = 0; strIndex < uStringSize; strIndex++ )
	{
		if ( '(' == str[ strIndex ] )
		{
			// lazor
			if ( ( strIndex < uStringSize - 1 ) && ')' == str[ strIndex + 1 ] )
			{
				uPipeCount += uStackSize ;
				strIndex++ ;
			}
			else
			{
				uStackSize++ ;
			}
		}
		else
		{
			uStackSize-- ;
			uPipeCount++ ;
		}
	}

	cout << uPipeCount << "\n" ;

	return 0 ;
}