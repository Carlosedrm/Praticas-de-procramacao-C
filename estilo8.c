//EX 8
/*Comments
Global variables should never be used simply to avoid defining function parameters. Experience shows that passing information through parameters and returned values actually simplifies program design and debugging - global variables used for this purpose are a common source of difficult-to-find bugs*/

#include <stdio.h>

// Função para calcular o salário líquido do funcionário:
void calcular_salario_liquido(double salario_bruto,double total_descontos){
  double salario_liquido;
  salario_liquido = salario_bruto - total_descontos;
  printf("O salário líquido é %.2f\n", salario_liquido);
}

// Função principal:
int main(){
    double salario_bruto,total_descontos,salario_liquido;
    puts("Digite o salário bruto:");
    scanf("%lf", &salario_bruto);
    puts("Digite o total de descontos:");
    scanf("%lf", &total_descontos);
    calcular_salario_liquido(salario_bruto,total_descontos); // chamada da função
    return 0;
}