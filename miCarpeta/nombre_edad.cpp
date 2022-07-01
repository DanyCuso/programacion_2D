#include <stdio.h>

int main (){


    char nombre[20]="", entrada[81]="";
    unsigned int edad = 0;

    printf("ingresa su nombre y edad separados por un espacio\t");
    printf("\n");
    gets( entrada );
    sscanf( entrada, "%s, %u", nombre,  &edad);

    printf( "Has escrito %s\n", entrada);
    printf( "Nombre: %s. Edad: %d\n", nombre, edad);

    return 0;
}