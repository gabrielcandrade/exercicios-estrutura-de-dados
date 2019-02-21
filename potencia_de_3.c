#include <stdio.h>

int main(int argc, char** argv)
{
	int numero=15, valor=1, i;
	
	for(i = 0; i <= numero; i++)
	{
		printf("3 elevado a %d = %d\n", i, valor);
		valor *= 3;
	}	
	return 0;
}