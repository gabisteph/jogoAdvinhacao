#include <stdio.h>

int main(){
    //imprime cabelhacalho do nosso jogo
    printf("**************************************\n");
    printf("*bem vindo ao nosso jogo de adivinhação*\n");
    printf("**************************************\n");
    
    int numerosecreto = 42;
    int chute;

    printf("Qual é o seu chute?");
    scanf("%d", &chute);

    printf("Seu chute foi %d", chute);
}

//anotações da aula

//Arquivo ".c" -> compilador (gcc) -> código da máquina -> Sistema Operacional


