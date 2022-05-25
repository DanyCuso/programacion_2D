/********************************************
 *              Daniel Valdes Artiles       *
 *                    ARRAYS                *
 ********************************************/

//documentation

/*
int main (){

    int array0[0];

    //array specific size

    int array1[10];

    int n = 9;
    int arr[n];

    //arrays con vlores especificos

    int arr2[6] = {0,1,2,3,4,5};

}
*/
#include <stdio.h>


int main () {

    int arr[5]; // declara tamaño del array _,_,_,_,_

    arr[0] = 5; // 5,_,_,_,_
    arr[2] = -10; // 5,_,-10,_,_ 


            //array[1]
    arr[3 / 2] = 2; // 5,2,-10,_,_
    arr[3] = arr[0];   // 5,2,-10,5,_ 

    printf("\n %d, %d, %d, %d,\n", arr[0], arr[1], arr[2], arr[3]);
    return 0;

}
