//EX3
/*Comments
Don't start variable or function names or #define symbols with underscores. Leading underscores are reserved for the implementation - break this rule, and you risk name collisions leading to confusing errors.
Use variable names that do not have to be documented or explained - longer is usually better. Worst: x; Bad: bsl; Good: binding_set_list;
Don't include implementation details such as variable type information in variable names - prefer to emphasize purpose instead. Bad: int count_int; Bad: const char *  ptr_to_const_chars; Better: int count; Better: const char * input_ptr; How to tell:
What if I need to change the variable type to a similar but different type? E.g. long ints, wide characters. Would it be important to change the variable names to  match? If so, implementation details are exposed in the variable names.
Prefer using a switch statement to if-else-if constructions to select actions depending on the value of a single variable.Generally results in simpler, clearer, and faster code than the equivalent series of if-else if statements. Exceptions: switch statement cannot be used if strings or floating point values are being tested. Not a good choice if ranges of integer values are being tested. Always include a default case with an appropriate action (e.g. an error message or assertion). Terminate each case with a break statement unless you deliberately wantto arrange "drop through" to the next case; if so, you must comment on it.*/

#include <stdio.h>
int main()
{
    float operando1, operando2; // operandos
    double resultado = 0; // resultado da operação
    char operador; // operador na forma de caracter
    puts("Digite o primeiro operando: ");
    scanf("%f", &operando1);
    puts("Digite o segundo operando: ");
    scanf("%f", &operando2);
    getchar();
    puts("Digite um operador (+, -, *, /): ");
    operador = getchar();
    switch(operador){
      case'+': resultado = operando1 + operando2;
      break;
      case'-': resultado = operando1 - operando2;
      break;
      case'*': resultado = operando1 * operando2;
      break;
      case'/': resultado = operando1 / operando2;
      break;
      default: puts("Operador inválido");
    }
    printf("Resultado = %.2f\n", resultado);
    return 0;
} 