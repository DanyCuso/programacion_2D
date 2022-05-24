#include <stdio.h>
#include "find.h"

int main (){

    int arr[] = {3,4,1,6};
    int len = 4;
    int n = 1;
    int posicion;

    posicion = find (arr, n, len);

    printf("%d\n", posicion);
     
     return 0;
}