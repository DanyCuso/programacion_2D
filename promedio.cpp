/*****************************************************************
 *                  Daniel Valdes Artiles                        *
 *                        Data 1B                                *
 *****************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main () {

    int len = 0, len2 = 0; //establece una variable para el largo de los arrays

    int suma[len2]; //establece el array suma de calificaciones

    int nota[len], studen[len2];    //establece los arrays donde se guardaran los datos

    float promedio; //array de promedio para cada alumno

    int j = 0; //direccion de memoria

//ingresa los datos, alumnos y cantidad de materias

    printf("\nIngrese el numero de estudiates:\t");
    scanf("%d", &len2);

    printf("\nIngrese el numero de materias a calificar:\t");
    scanf("%d", &len);

//establece los arrays iniciando en 0

    suma[j] = 0;
    promedio = 0;

//for loop para contar la caotidad de alumnos

    for (j = 0; j < len2; j++){

//for loop para la contidad de materias
        
        for( int i = 0; i < len; i++){

            int operador = i + 1;
            int operador2 = j + 1;

//pide las calificaciones y guardalas en el array suma[j]

            printf("\nIngrese la nota%d alumno%d\n", operador, operador2);
            scanf("%d", &nota[i]);
            suma[j] = suma[j] + nota[i];
           
        }
//promedia la suma entre la cantidad de materias y escribelas

    int k = j + 1; // direccion de memoria + 1, para el numero de alumno

    promedio = (suma[j] / len);
    printf("\npromedio del alumno %d = %02.f\n",k, promedio);

    suma[j] = 0; //regresa suma a 0

    }
    
return 0;
}