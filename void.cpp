#include <stdio.h>

void wold(){

    printf("\nThe void function has return!"
           " a void()\n");
    
}
void fun(){ //escribe una funcion vacia

    return wold();
}

int main(){ 
    fun(); //llama la funcion vacia
    return 0;
}
