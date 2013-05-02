#include <stdio.h>
#include <ncurses.h>
#include <math.h>
int main()
{
	int x;
	int y;
	int sum;
	int divicion;
	int resto;
	int producto;	
	printf("Ingresar el primer numero: ");
	scanf("%d" , &x);
	printf("Ingresar el segundo numero: ");
	scanf("%d" , &y);
	sum=x+y;
	resto=x-y;
	producto=x*y;
	divicion=x/y;
	printf("La suma es: %d\n",sum);
	printf("La resta es: %d\n",resto);
	printf("La multiplicacion es: %d\n",producto);
	printf("La divicion es: %d\n",divicion );	
           
           }