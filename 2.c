#include <locale.h>
#include <stdio.h>

int main(){

setlocale(0, "Portuguese");

    double num1, num2, resultado;
    num1=5.0;
    num2=2.0;
    resultado=num1/num2;
    printf("O resultado da divisão é: %.2f.", resultado);

return 0;
}
