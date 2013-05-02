
#include <stdio.h>

main()
{
	char nombre[20], apellido[20];

	printf( "Escribe tu nombre: " );
	scanf( "%s", nombre );

	printf( "Escribe tu apellido: " );
	gets( apellido );
	return 0;
}