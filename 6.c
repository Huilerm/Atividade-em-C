#include <locale.h>
#include <stdio.h>

float main(){

setlocale(0, "Portuguese");

    float nota1, nota2, nota3, media;
    printf("Informe a nota 1:\n");
    scanf("%f", &nota1);
    printf("Informe a nota 2:\n");
    scanf("%f", &nota2);
    printf("Informe a nota 3:\n");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf("A sua média é: %.2f.", media);

return 0;
}
