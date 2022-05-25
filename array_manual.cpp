/******************************************************
 *              Daniel Valdes Artiles                 *
 *                  Array manual                      *
 ******************************************************/

#include <stdio.h>

int main (){

    int len;
    int arr[len];
    int var;

    printf("\ningresa el tamaño del array:\t");
    scanf("%d", &len);

    for (int i = 0; i < len; i++){
        
        int k = i + 1;

        printf("\ningresa el dato numero %d del array\t", k);
        scanf("%d", &arr[i]);

    }

    printf("\nel dato 1: %d, el dato 5: %d, el dato 10: %d\n", arr[0], arr[4], arr[9]);

return 0;
}

