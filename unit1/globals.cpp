/****************************************************
 *              using globals variables             *
 *              Daniel Valdes Artiles               *
 ****************************************************/

#include <stdio.h>

int main(){

    int x,y = 10;

    x = (y < 10) ? 30 : 40;     //if x < 10, print 30, if x >= 10 print 40
    
    printf("value of x: %d \n", x);
    return 0;
    }