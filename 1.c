#include <locale.h>
#include <stdio.h>

int main(){

setlocale(0, "Portuguese");

    float altura, peso;
    altura=1.75;
    peso=68.5;
    printf("Altura: %.2f metros, Peso: %.2f kg.", altura, peso);

return 0;
}
