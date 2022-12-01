#include <stdio.h>

int somap(int a, int b){

    int soma;

    for(a+1; a < b; a++){
        if(a % 2 == 0){
            soma += a;
        }
    }

    return soma;
}

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", somap(a, b));

    return 0;
}
