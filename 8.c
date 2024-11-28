#include <locale.h>
#include <stdio.h>

float main(){

setlocale(0, "Portuguese");

    float horasTrabalhadas, valorHora, salario;
    printf("Informe as horas trabalhadas:\n");
    scanf("%f", &horasTrabalhadas);
    printf("Informe o valor da hora trabalhada:\n");
    scanf("%f", &valorHora);
    salario=horasTrabalhadas*valorHora;
    printf("O seu salário é: %.2f.", salario);

return 0;
}
