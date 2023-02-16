//EX5
/*Comments
Take names seriously - they are a major way to communicate your design intent to 
the future human reader (either yourself or somebody else). Poor names are a major 
obstacle to understanding code.
Prefer "flat" code to nested code. Deeply nested code is hard to read and fragile 
to modify. Prefer a code organization of a "flat" series of condition-controlled 
short code segments. This may require re-arranging the logic, but the result is 
simpler and easier to work with.
Bad:
if(...) {
...
if(...) {
...
}
...
}
... // I'm lost - just when does this code execute?
}
Better:
if(...) {
...
}
else if(...) {
...
}
else if (...) {
...
}
Use a consistent indenting scheme and curly brace scheme. Imitating Kernigan & 
Ritchie or Stroustrup is certainly one good approach.
*/
/* Programa para calcular as raízes de uma equação de segundo grau */
#include <stdio.h>
#include <math.h>
int main() {   
  float num1, num2, num3; //Tres numeros para realizacao da equacao
  puts("Digite o primeiro número: "); 
  scanf("%f", &num1);
  puts("Digite o segundo número: "); 
  scanf("%f", &num2);
  puts("Digite o terceiro número: "); 
  scanf("%f", &num3);
  float resultado = pow(num2,2)-4*num1*num3;
  printf("%f\n", resultado);
  if (resultado<0){
    puts("Nao existe raiz!"); 
  } 
  else if (resultado==0) {
    puts("Existe uma raiz:");
    float raiz = -num2/(2* num1); //calcula a raiz da equacao

    printf("%f\n", raiz);
  } 
  else {
    puts("Existem duas raizes:");
    float variavel = pow(resultado,0.5);//calcula valor da variavel da equacao da raiz
    float raiz = (-num2 + variavel)/(2*num1); //calcula raiz 1

    printf("%f\n", raiz);
    raiz = (-num2 - variavel)/(2*num1); //calcula raiz 2
    printf("%f\n", raiz);
  }
  return 0;
}