#include<iostream>

int main()
{
	int16_t n = 0 ;
	std::cin >> n ;

	int16_t n_x = 0 ;
	int16_t n_y = 0 ;
	int16_t n_z = 0 ;

	int16_t res_x = 0 ;
	int16_t res_y = 0 ;
	int16_t res_z = 0 ;

	for( int16_t i = 0; i < n; i++ )
	{
		std::cin >> n_x >> n_y >> n_z ;

		res_x += n_x ;
		res_y += n_y ;
		res_z += n_z ;
	}

	if( 0 == res_x &&
		0 == res_y &&
		0 == res_z )
	{
		std::cout << "YES" ;
	}
	else
	{
		std::cout << "NO" ;
	}

	return 0 ;
}