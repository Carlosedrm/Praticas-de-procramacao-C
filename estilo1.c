//EX1
/*Comments
Don't ever use easily confused single-letter variable names - don't rely on the font! Lower-case L (l), upper-case i (I) are too easily confused with each other and the digit one. Similarly with upper-case O and digit zero.*/

#include <stdio.h>
int main()
{
 const char letra = 'H'; // letra a ser impressa
 const int vezes = 10; // número de vezes que a letra deve ser impressa
 for (int i = 1; i <= vezes; i++)
 putchar(letra);
 putchar('\n');
 int valor = vezes; // valor a ser impresso
 while (valor > 0){
 printf("%d ", valor);
 valor--;
 }
 putchar('\n');
 return 0;
}