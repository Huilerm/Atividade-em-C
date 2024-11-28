#include <locale.h>
#include <stdio.h>

int main(){

setlocale(0, "Portuguese");

    float base, altura, area;
    printf("Informe a base:\n");
    scanf("%f", &base);
    printf("Informe a altura:\n");
    scanf("%f", &altura);
    area=(base*altura)/2;
    printf("A área do triângulo é: %.2f.", area);


return 0;
}
