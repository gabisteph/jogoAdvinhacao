#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    //imprime cabelhacalho do nosso jogo
    printf("**************************************\n");
    printf("*bem vindo ao nosso jogo de adivinhação*\n");
    printf("**************************************\n");
    
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int ganhou = 0;
    int tentativas = 1;
    double pontos = 1000;
    
    

    while(ganhou == 0) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);

        
        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);
        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }
        if(acertou){
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, você é um bom jogador\n");
            ganhou = 1;
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o número secreto\n");
        }
        else{
                printf("Seu chute foi menor que o número secreto\n");
            }
        tentativas = tentativas + 1;
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    printf("FIM DO JOGO!\n");
    printf("Total de pontos: %.f\n", pontos);
    printf("Você acertou em %d tentativas!\n", tentativas);

}

//anotações da aula

//Arquivo ".c" -> compilador (gcc) -> código da máquina -> Sistema Operacional


