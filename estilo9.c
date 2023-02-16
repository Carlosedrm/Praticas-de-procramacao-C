//EX 9
/*Comments
Prefer to declare and define as pointers to constants rather than initialized arrays of char: Bad: const char message[] = "Goodbye, cruel world!"; Requires extra storage for the array, plus time to copy the literal into the array. message is an array sized big enough to hold the string which is copied in at initialization, even though the string has already been stored in memory. Good: const char * const message = "Goodbye, cruel world!"; Simply sets a pointer to the string literal already stored in memory. message is a constant pointer to constant characters - neither the pointer nor the characters can be changed.
Write for statements in their conventional form if possible. Good - the conventional, most common form: for(i = 0; i < n; i++) // correct for almost all cases Bad: for(i = 1; i <= n; i++) // confusing - what is this about? for(i = n; i > 0; i--) // better be a good reason for this! for(i = -1; i <= n; i++) // totally confusing!*/

#include <stdio.h>
int main(){
    
    double total,valor_medio,valor; //total da soma, valor medio das duas entradas,valor das entradas
    int numero_de_contas,i;//quantidade de contas a serem feitas
    const char * const prompt = "Digite o valor da conta %d: ";//uma const que vai usada no for para colocar os valores
  
    printf("Digite o número de contas: ");
    scanf("%d", &numero_de_contas);

    for (i = 0; i < numero_de_contas; i++){ //for para colacular total e valor medio
        printf(prompt, i+1); //puxou const inicializada
        scanf("%lf", &valor);
        total += valor;
        valor_medio = total / numero_de_contas;
    }
    printf("Valor total = %.2lf\n", total);
    printf("Valor médio = %.2lf\n", valor_medio);
    return 0;
}