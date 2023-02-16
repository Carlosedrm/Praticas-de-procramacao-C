//EX 7
/* Comments
Numerical or string constants that are "hard coded" or "magic numbers" that are written directly in the code are almost always a bad idea, especially if they appear more than once.
Prefer for statements over while statements if indexing through an array or counting - doing an operation a certain number of times.This puts all of the information about the iteration's bounds in a single place, making the code easier to get right. Never modify the looping variable in the body of the loop.
Ensure that input or data brought into the program cannot overflow the array or memory block in which it is to be stored. A basic and essential security and reliability precaution. Assume user or file input can contain arbitrarily long random strings, and write code that can handle it safely and reliably, even if it simply ignores over-length input. Use functions and facilities that specify explicit maximum lengths for input.*/

#include <stdio.h>
int main()
{
  #define input_size 10  //unico ponto de manutencao
  char letras[input_size]; //alocar memoria para string de entrada
  
  puts("Digite 10 letras:");
  for (int i = 0; i < 10; i++){ //for para getchar de letras
    printf("letra %d: ", i+1);
    letras[i] = getchar();
    getchar(); // skip the ENTER char
  }
  
  puts("\nAs 10 letras digitadas foram:");
  for(int i=0;i < 10;i++){ //for para putchar de letras digitadas
    putchar(letras[i]);
  }
  
  putchar('\n');
  puts("\nDigite uma sequência de, no máximo, 9 letras:");
  for(int i=0;i<9;i++){ //for para getchar de letras
    letras[i] = getchar();
  }
  
  printf("\nSequência digitada: ");
  for(int i=0;i<9;i++){ //for para putchar de letras digitadas
    putchar(letras[i]);
  }
}