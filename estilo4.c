//EX4
/*Comments
Prefer double to float. Only use of float: if memory space needs to be saved, or required by an API. Note that in C89 (at least) float argument values are automatically converted to double in function calls.
Do not assume that two float or double values will compare equal even if mathematically they should. Only case where they will: small to moderately large integer values have been assigned (as opposed to computed and then assigned). 
Otherwise, code should test for a range of values rather than strict equality.*/

#include <stdio.h>
int main()
{
    double num1 = 1234567890.123; //primeriro numero a ser comparado
    double num2 = 12345.123; //segundo numero a ser comparado
    double op1 = num1/num2; //operacao para conferir se os numeros sao igual
    double op2 = num1/num2; //operacao para conferir se os numeros sao iguais
    if (op1 == op2)
        puts("iguais");
    else
        puts("diferentes");
    printf("%.10f \n%.10f\n", op1, op2);
    return 0;
}