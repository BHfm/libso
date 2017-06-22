#include <stdio.h>

void ssort(double *v, int tam){
	int i, j;
	double aux;

	for ( i = 0; i < tam; ++i)
	{
		for ( j = i; j < tam; ++j)
		{
			if (v[j] > v[i])
			{
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
}