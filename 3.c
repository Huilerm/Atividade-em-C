#include <locale.h>
#include <stdio.h>

int main(){

setlocale(0, "Portuguese");

    float num1, num2, soma;
    printf("Informe o primeiro n�mero:\n");
    scanf("%f", &num1);
    printf("Informe o segundo n�mero:\n");
    scanf("%f", &num2);
    soma=num1+num2;
    printf("A soma de %.2f e %.2f � %.2f.", num1, num2, soma);

return 0;
}
