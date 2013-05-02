#include <stdio.h>
#include <ncurses.h>
#include <math.h>
 int main(int argc, char const *argv[])
 {
 	int x;
 	int contador;
 	int factorial;
 	contador=1;
 	factorial=1;
 	printf("Ingrese el numero para el factorial: \n");
 	scanf("%i",&x);
 	do
 		{
 			(factorial=factorial*contador++);

 		}
 	while
 		
 			(contador<=x);
 		
 	printf("El factorial es %i\n",factorial);
 	return 0;
 }