#include <locale.h>
#include <stdio.h>

float main(){

setlocale(0, "Portuguese");

    float preco, quantidade, valor;
    printf("Informe o pre�o:\n");
    scanf("%f", &preco);
    printf("Informe a quantidade:\n");
    scanf("%f", &quantidade);
    valor=preco*quantidade;
    printf("O valor total a ser pago �: %.2f.", valor);

return 0;
}

