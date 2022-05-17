#include <stdio.h>

int main(){

    int time = 12;
    
    if (time < 18 ){
        printf("Good day!!!\n");
        if (time == 12){
            printf("It's noon\n");
        }
    }
    else {
        printf("Good evening!!!\n");
    }
}