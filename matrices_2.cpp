#include <stdio.h>

int main (){
    int numero[100][100], filas, columnas;

    //creating the matrix
    printf("\nDigite el numero de filas\t");
    scanf("%d", &filas);

    printf("\nDigite el numero de columnas\t");
    scanf("%d", &columnas);

    //storing the elements of each component

    for(int i = 0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            printf("\nDigite un numero[%d][%d]\t", i, j);
            scanf("%d", &numero[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            printf("%d  ", numero[i][j]);
        }
    printf("\n");
    }
    printf("\n\n");
     for (int i=0; i<columnas; i++){
        for (int j=0; j<filas; j++){
            printf("%d  ", numero[j][i]);
        }
    printf("\n");
    }

return 0;
}