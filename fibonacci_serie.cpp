//hacer una serie fibonacci
//1,1,2,3,5,8,13,...,n
//x,y,z,n=y+z

#include <stdio.h>
#include <stdlib.h>
#include "../fund_alg_b/unit1/utils.h"


int main (){

    long unsigned int n, x = 0, y = 1, z = 1;

    printf("\ningrese cantidad de elemntos\t");
    scanf("%lu", &n);

    for (int i = 0; i < n; i++){
        z = x + y;
        printf("\n%lu\n", z);
        x = y;
        y = z;
        sleep(1000);
    }
system("clear");
return 0;
}
