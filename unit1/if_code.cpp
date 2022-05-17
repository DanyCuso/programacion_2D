#include <stdio.h>

int main(){

    int time;

    printf("inlgresa la hora, use time in 24 hours\t");
    scanf("%d", &time);

    if (time == 12){
        printf("Noon\n");
    }
    else if (time == 0){
        printf("Good Midnight\n");
    }
    else if (time < 12 && time >= 0){
        printf("Godd morning\n");
    }
    else if (time > 12 && time <= 18){
        printf("Good evening\n");
    }
    else if (time > 18 && time < 24){
        printf("Good nigth\n");
    } 
    else {
        printf("System Error: Horario no compatible\n");
    }
return 0;
}