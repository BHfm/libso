#include <stdio.h>

int somatorio(int n){
	int i, final;
	final = 0;
	for ( i = 1; i <= n; ++i)
	{
		final += i;
	}
	return final;
}