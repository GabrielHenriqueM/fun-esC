#include <stdio.h>

int retornar(int n){

    int i;

    for(i = 1; i < n; i++){
        if(n % i == 0){
        printf("%d\n", i);

        }


    }




}


int main(){

    int n;

    scanf("%d", &n);

    printf("%d", retornar(n));



    return 0;
}
