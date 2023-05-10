#include <stdio.h>
#include <string.h>
#include <locale.h>

struct shaba_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} aluno[2];

int main() {
   // struct shaba_aluno aluno1;

    for(int i=0;i<2;i++){

    printf("Informe o nome do Aluno %d\n\n", i+1);

    printf("Informe a matrícula do aluno: ");
    fgets(aluno[i].matricula, 10, stdin);

    printf("Informe a nome do aluno: ");
    fgets(aluno[i].nome, 100, stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno[i].curso, 50, stdin);

    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d", &aluno[i].ano_nascimento);
    getchar();
    printf("\n");

    };

    for(int i=0;i<2;i++){
    printf("\n\n===================DADOS CADASTRADOS DO ALUNO %d===================\n", i+1);
    printf("Matrícula: %s\n", aluno[i].matricula);
    printf("Nome: %s\n", aluno[i].nome);
    printf("Curso: %s\n", aluno[i].curso);
    printf("Ano de Nascimento: %d\n\n", aluno[i].ano_nascimento);

    };

};
