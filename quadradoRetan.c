#include <stdio.h>

int retornar(int b, int h){

    int igual;

    if(b == h){

        igual = 1;

    }if(b != h){

        igual = 0;
    }

    return igual;
}

int main(){

    int b, h;

    scanf("%d %d", &b, &h);

    printf("%d", retornar(b, h));



    return 0;
}
