#include<iostream>

int GetPerimeter( const int h, const int w )
{
	return ( 2 * h ) + ( 2 * w );
}

int main()
{
	int n = 0;
	std::cin >> n;

	int minPerimeter = INT_MAX;

	for ( size_t w = 1; w <= n; w++ )
	{
		if ( 0 == ( n % w ) )
		{
			const int h = ( n / w );
			const int iterPerimeter = GetPerimeter( w, h );

			if ( minPerimeter > iterPerimeter )
			{
				minPerimeter = iterPerimeter;
			}
		}
	}

	std::cout << minPerimeter;

	return 0;
}