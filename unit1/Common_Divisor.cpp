#include <stdio.h>

int process(int n1, int n2);

int main (){


    int n1, n2;

    printf("\nIngrese dos enteros positivos:\t");
    scanf("%d", &n1);
    scanf("%d", &n2);


    printf("\nGCD de %d y %d es: %d\n\n", n1, n2, process(n1, n2));
    return 0;
}

int process(int n1, int n2){

    if (n2 != 0) return process (n2, n1 % n2);
    else return n1;


}