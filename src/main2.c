#include <stdio.h>
#include "../lib/src/distancias.h"

int main(int argc, char *argv[]) {   
   
	float dlrecta, puntomedio;
	int dhoriz, dvert, exispm, yepm;
	
	dlrecta = dlr( 3, 4, 10, 12 );
	printf("Distancia en línea recta: %f\n", dlrecta);
	dhoriz = dh( 3, 4, 10, 12 );
	dvert = dv( 3, 4, 10, 12 );
      	printf("Distancia horizontal: %d\n", dhoriz);
      	printf("Distancia vertical: %d\n", dvert);
      	exispm = xpm ( 2, 4, 4, 6);
      	yepm = ypm ( 2, 4, 4, 6);
      	printf("El punto medio es: %d, %d\n", exispm, yepm);
      
      return 0;
}
