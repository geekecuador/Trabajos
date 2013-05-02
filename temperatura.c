#include <stdio.h>
#include <ncurses.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int x;
	printf("Ingrese la temperatura:\n");
	scanf("%d",&x);
	if ((x<=30) && (x>=15))
	{
		printf("El clima esta excelente, la temperatura es: %d\n",x);
	}
	else if ((x<=40) && (x>30))
	{
		printf("El clima esta caliente, la temperatura es: %d\n",x);
	}
	else
	{
		printf("El clima esta muy loco, o ingresaste mal la temperatura.\n");
	}
	return 0;
}