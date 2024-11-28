#include <locale.h>
#include <stdio.h>

float main(){

setlocale(0, "Portuguese");

    float metros, valor;
    printf("Informe o valor em metros:\n");
    scanf("%f", &metros);
    valor=metros*100;
    printf("O valor em centímetros é: %.2f.", valor);


return 0;
}

