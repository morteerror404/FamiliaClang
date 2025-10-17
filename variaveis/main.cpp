// libs

#include <stdio.h>

//variaveis 

int a = 0;
int b = 0; 
int var;

int soma(int a, int b, int var){

    printf("Bora somar");
    printf("Digite o um valor para A: ");
    scanf("%d", &var);

        a = var;
        var = 0;
    
    printf("Digite o um valor para B: ");
    scanf("%d", &var);

        b = var;
        var = 0;

    var = a + b;

    printf("\n Total: %d", var );
    return 0;

}

int sub(int a, int b, int var){

    printf("Bora subtrair");
    printf("Digite o um valor para A: ");
    scanf("%d", &var);

        a = var;
        var = 0;
    
    printf("Digite o um valor para B: ");
    scanf("%d", &var);

        b = var;
        var = 0;

    var = a + b;

    printf("\n Total: %d", var );
    return 0;

}

int main(){
    soma(a, b, var);
    return 0;

}