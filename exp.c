#include <stdio.h>


double e(double n, int ex){
	int i;

	for ( i = 0; i < ex; ++i)
	{
		n *= n;
	}
	return n;
}