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
		printf("El numero mayor es: %d\n\n",x );
	}
	else if (y>x)
	{
		printf("El numero mayor es: %d\n\n",y);
	}
	else
	{
		printf("Los dos son iguales: %d,%d\n\n\t",x,y);
	}
	return 0;
}