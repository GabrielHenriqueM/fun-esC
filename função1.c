#include <stdio.h>

int maior(int x, int y){

    if(x > y){
    return x;

    }else {

    return y;
    }




}

int main(){

    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d", maior(x, y));


    return 0;
}
