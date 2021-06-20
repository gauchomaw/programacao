#include <stdio.h> // biblioteca padrão para leitura e escrita
#include <stdlib.h> // system

// função principal, devolve um inteiro
int main()
{
    // declaração de variáveis
    // n1 = primeiro número
    // n2 = segundo número
    // resultado = recebe a soma dos dois números
    int n1, n2, resultado;
    
    // limpra a tela
    system("cls");
    
    // msg de introdução
    printf("-------------------------------------------------\n");
    printf("| Ler dois numeros inteiros e apresentar a soma |\n");
    printf("-------------------------------------------------\n\n");
    
    // msg para leitura do primeiro número
    printf("Entre com o primeiro numero: ");
    
    // Leia o primeiro número e atribui a variável n1
    scanf("%d", &n1);

    // msg para leitura do segundo número
    printf("Entre com o segunda numero: ");

    // Leia o segundo número e atribui a variável n2
    scanf("%d", &n2);

    // Calcula a soma de n1 + n2 atribuindo a variável resultado
    resultado = n1 + n2;

    // msg com o resultado da soma dos dois números lidos
    printf("A soma dos numeros eh: %d", resultado);

    // retorna zero por padrão, sem erros
    return 0;
}
