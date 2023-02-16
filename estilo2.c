//EX2
/*Comments
Do not use cute or humorous names, especially if they don't help communicate the purpose of the code. Bad: delete victim; // there is no "victim" here. Better: delete node_ptr; // there is a node that we are deleting. Bad: zap(); // sure, it's
cute, but what does it do?. Better: clear_pointers(); // ok - this function clears some pointers.
Use upper/lower mixed case or underscores to improve readability of explanatory names. Bad: void processallnonzerodata(); Good: void ProcessAllNonZeroData(); Good:void process_all_non_zero_data();*/

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Habilita a acentuação para o português
    char nomePaciente[20]; // Nome do paciente
    puts("Digite o seu nome: ");
    scanf("%s", nomePaciente);
    int idade = 0; // Idade do paciente com variavel idade
    puts("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("%s, você tem %d anos.\n", nomePaciente, idade);
    return 0;
}