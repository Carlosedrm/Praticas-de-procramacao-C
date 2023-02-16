//EX 6
/*Comments
Prefer to use an enumerated type instead of arbitrary numeric code values.The names in the enumeration express the meaning directly and clearly. Do not use an enumeration if the result is greater program complexity. E.g. translating command strings into enums which are then used to select the relevant code for the command simply doubles the complexity of command-selection code.
Give the type a name starting with an upper-case letter.
The names for the values should be all upper case - this is because the names have file scope and we need a reminder that they are a form of constant whose value is present everywhere in the file after the declaration, similar conceptually to a #define symbol which is also written in all upper case.
Always store and pass enum values in the enum type, even though they convert freely to ints. Keep it in the enum type to maintain the clear and direct meaning.
Prefer to use the default for how enum values are assigned by the compiler. Bad: 
enum Fruit_e {APPLE = 0, ORANGE, PEAR, BANANA};// Why? This is the default! Not relying on the default when it is suitable indicates either ignorance or confusion.
Bad: enum Fruit_e {APPLE = 3, ORANGE, PEAR, BANANA};// Potential fatal confusion! 
There needs to be a VERY GOOD reason to override the compiler-assigned values. 
Good: enum Fruit_e {APPLE, ORANGE, PEAR, BANANA};// Let the compiler keep track!
Understand and use how I/O works with enum values. Enums are written as integer values. To read an enum value, read an int, check if for the maximum and minimum valid values, and then assign with a cast to the enumerated type.
String literal constants can be given names either as a preprocessor symbol with #define, or as a const char * const variable declared and initialized at file scope. #define PROMPT "Enter command". const char * const prompt_msg = "Enter command";
Use functions freely to improve the clarity and organization of the code. Modern machines are very efficient for function calls, so avoiding function calls is rarely required for performance. If it is, prefer inline functions to get both performance and clarity.
Define functions that correspond to the conceptual pieces of work to be done, even if only called once or from one place. Clarify the code structure, making coding, debugging, maintenance, easier. E.g. in a spell-checking program, create a function that processes a document by calling a function that processes a line of the document that in turn calls a function that finds each word in the line.
Arrange function definitions in a .c file in a human-readable order corresponding to the top-down functional decomposition or usage order of the module. The reader should be able to read the code in increasing order of detail to take advantage of the information-hiding value of functions. So the root(s) for the function call tree should be the first functions listed; leaf functions called only from one branch should appear before the start of the next branch; leaf functions called from all branches should appear last. Don't make the reader rummage through the file trying to find functions listed in a haphazard order
Be careful with leaving out optional curly braces, especially with if. Clear: a simple thing that also looks simple:
if(x == 3)
foo(x);
But if we later add some more code to the if, it is just too easy to write:
if(x == 3)
foo(x);
zap(); 
uh ... why doesn't it work right? 
Uglier but more reliable when coding late at night:
if(x == 3) {
foo(x);
}
*/

#include <stdio.h>
#include <stdlib.h>
//meses do ano
enum Meses{JANEIRO,FEVEREIRO,MARÇO,ABRIL,MAIO,JUNHO,JULHO,AGOSTO,SETEMBRO,OUTUBRO,NOVEMBRO,DEZEMBRO};
//dias da semana
enum Dias{SEGUNDA,TERÇA,QUARTA,QUINTA,SEXTA,SÁBADO,DOMINGO};
//meses do ano
char* meses[] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" }; 
//dias da semana
char* dias[] = { "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado", "Domingo" };

//FUNCAO SELEÇÃO DO MÊS DO ANO:
int selecao_mes(mes_selecionado){
    puts("Meses do ano: ");
    for (int m = JANEIRO; m <= DEZEMBRO; m++){
        printf("\t(%2d) %s\n", m, meses[m]);
    }
    //SELECAO DO MES PELO USUARIO
    puts("Selecione um mês pelo seu número: ");
    scanf("%d", &mes_selecionado);
    printf("Mês selecionado: %s\n", meses[mes_selecionado]);
  return mes_selecionado;
}

int selecao_dia(dia_selecionado){// FUNCAO SELEÇÃO DO DIA DA SEMANA:
    putchar('\n');
    puts("Dias da semana: ");
    for (int d = SEGUNDA; d <= DOMINGO; d++){
        printf("\t(%2d) %s\n", d, dias[d]);
    }
    //SELECAO DO DIA DA SEMANA PELO USUARIO
    puts("Selecione um dia pelo seu número: ");
    scanf("%d", &dia_selecionado);
    printf("Dia selecionado: %s\n", dias[dia_selecionado]);
  return dia_selecionado;
}

int main(){
    int mes_selecionado,dia_selecionado;
    mes_selecionado=selecao_mes(mes_selecionado);
    dia_selecionado=selecao_dia(dia_selecionado);
    // TOMADA DE DECISÃO
    putchar('\n');
    if (mes_selecionado == JANEIRO || dia_selecionado == DOMINGO){
        puts("Descansar!\n");
    }
    else{
        puts("Trabalhar!\n");
    }
    return 0;
}