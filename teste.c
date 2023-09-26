#include <stdlib.h>
#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    char cpf[10];
} ;

struct Pessoa acharMaiorIdade(struct Pessoa pessoas[3]) {
    struct Pessoa maiorIdade = pessoas[0];

    for(int i = 0; i < 3; i++) {
        if(pessoas[i].idade > maiorIdade.idade) {
            maiorIdade = pessoas[i];
        }
    }

    return maiorIdade;
}

int main() {
    int array[10];
    struct Pessoa pessoas[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o cpf da pessoa %d: ", i);
        scanf("%s", pessoas[i].cpf);
    }

    struct Pessoa maior = acharMaiorIdade(pessoas);
    printf("A pessoa com maior idade eh: %s\n", maior.nome);

    for(int i = 0; i < 3; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("CPF: %s\n", pessoas[i].cpf);
    }

    return 0;
}

// Codigo com typedef
//obs: botei o numero 2 no final das variaveis para nao dar conflito com o codigo anterior

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char cpf[10];
} Pessoa2;

Pessoa2 acharMaiorIdade2( Pessoa2 pessoas[3]) {
    Pessoa2 maiorIdade = pessoas[0];

    for(int i = 0; i < 3; i++) {
        if(pessoas[i].idade > maiorIdade.idade) {
            maiorIdade = pessoas[i];
        }
    }

    return maiorIdade;
}

int main() {
    int array[10];
    Pessoa2 pessoas2[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", pessoas2[i].nome);

        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &pessoas2[i].idade);

        printf("Digite o cpf da pessoa %d: ", i);
        scanf("%s", pessoas2[i].cpf);
    }

    Pessoa2 maior = acharMaiorIdade2(pessoas2);
    printf("A pessoa com maior idade eh: %s\n", maior.nome);

    for(int i = 0; i < 3; i++) {
        printf("Nome: %s\n", pessoas2[i].nome);
        printf("Idade: %d\n", pessoas2[i].idade);
        printf("CPF: %s\n", pessoas2[i].cpf);
    }

    return 0;
}