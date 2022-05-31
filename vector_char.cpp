/***********************************************************************
 *                          Daniel Valdes Artiles                      *
 *                              vector.char                            *
 ***********************************************************************/


#include <stdio.h>

int main () {
    char letra1[] = {'a','b','c','d','e','f'};
    char letra2[] = {'g','h','i','j','k','l'};
    char letra3[12];

    //convina los elementodes de letra1 y letra2 ----> letra3

    for (int i = 0; i < 6; i++){
        letra3[i] = letra1[i];
    }

    for (int i = 0; i < 12; i++){
        letra3[i] = letra2[i - 6];
    }

    //mostrar letras del array

    for (int i = 0; i < 12; i++){
        printf("%c\n", letra3[i]);

    }
return 0;
}
