#include <stdio.h>
#include <math.h>
#include <ncurses.h>
int main(int argc, char const *argv[])
{
	int x;
	int y;
	printf("Ingrese el primer numero: \n" );
	scanf("%d",&x);
	printf("Ingrese el segundo numero: \n" );
	scanf("%d",&y);
	if (x>y)
	{
		printf("El numero mayor es: %d",x );
	}
	else
		printf("El numero mayor es: %d",y);
	return 0;
}