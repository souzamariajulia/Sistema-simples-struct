#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no{ //typedef função que apelida a struct

    float peso;
    float altura;
    int idade;

    struct no *prox;
}NO; //apelido

NO *inicio = NULL;
int tamanho = 0; //variavel que mostra o tamanho da lista

void ad(float altura, int idade, int pos, float peso){
    NO *novo = malloc(sizeof(NO)); //sizeof passa o tamanho de bytes necessarios para o parameto de malloc
    novo -> peso = peso;
    novo -> altura = altura;
    novo -> idade = idade;
    novo -> prox = NULL;

    if (pos >= 0 && pos <= tamanho)

    if(inicio == NULL){
        inicio = novo;
    } else if(pos == 0) {
        novo ->prox = inicio;
        inicio = novo;
    } else {
        NO *aux = inicio;
        int i;
        for (i = 0; i < pos -1; ++i)
        {
            aux = aux -> prox;

        }
        novo->prox=aux->prox;
        aux->prox=novo;
        }
        tamanho++;
}

void imprimir(){

    NO *aux = inicio;
    while (aux != NULL){
        printf("Idade: %d\n", aux -> idade);
        printf("Peso: %.3f\n", aux -> peso);
        printf("Altura: %.2f\n\n", aux -> altura);
        aux = aux -> prox;
    }
    }

int main(){

    ad(1.65, 19, 0, 67.3); //adicionado na posição 0, ou seja no início
    ad(1.43, 12, 1, 38.6);
    ad(1.54, 15, 2, 50.0);
    imprimir();
    printf("quantidade de no: %i\n", tamanho);
    return 0;
}
